/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:14:31 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/18 22:53:44 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(char const *s, char const c)
{
	size_t	count;
	size_t	n;

	count = 0;
	n = 0;
	while (*s)
	{
		if (*s == c && n != 0)
		{
			count++;
			n = 0;
		}
		else if (*s != c)
			n++;
		s++;
	}
	if (n != 0)
		count++;
	return (count);
}

char	*ft_strndup(const char *s, size_t n)
{
	size_t	s_len;
	size_t	i;
	char	*dup;

	s_len = ft_strlen(s);
	if (n < s_len)
		n = s_len;
	dup = (char *)malloc(sizeof(char) * (n + 1));
	if (!dup)
		return (NULL);
	dup[n] = '\0';
	i = 0;
	while (*s && i < n)
	{
		*(dup++) = *(s++);
		i++;
	}
	dup -= n;
	return (dup);
}

// void	free_all(split)

char	**ft_split(char const *s, char c)
{
	char	**to_split;
	size_t	n;

	to_split = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!to_split)
		return (NULL);
	n = 0;
	while (*s)
	{
		if (*s == c && n != 0)
		{
			*(to_split++) = ft_strndup(s, n);
			n = 0;
		}
		else if (*s != c)
			n++;
		s++;
	}
	if (n != 0)
		*(to_split++) = ft_strndup(s, n);
	return (to_split);
}

#include <stdio.h>

int	main(void)
{
	char	*str;
	char	charset;
	char	**box;
	int		i;

	str = " Hello!! My Name is Pika!! ";
	charset = ' ';
	i = 0;
	box = ft_split(str, charset);
	while (box[i])
		printf("%s\n", box[(i++)]);
	free(box);
}
