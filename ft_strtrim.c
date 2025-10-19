/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:14:40 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/19 16:09:14 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static bool	char_set(char const to_find, char const *set)
{
	while (*set)
	{
		if (*set == to_find)
			return (true);
		set++;
	}
	return (false);
}

static size_t	count_sets(char const *s1, char const *set)
{
	size_t	count;

	count = 0;
	while (*s1)
	{
		if (char_set(*s1, set))
			count++;
		s1++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	s1_len;
	size_t	set_len;
	size_t	trim_len;

	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	trim_len = s1_len - count_sets(s1, set);
	trim = (char *)malloc(sizeof(char) * (trim_len + 1));
	if (!trim)
		return (NULL);
	trim[trim_len] = '\0';
	while (*s1)
	{
		if (!char_set(*s1, set))
			*(trim++) = *s1;
		s1++;
	}
	return (trim - trim_len);
}

// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	char	sep[3] = "12";
// 	char	*strcat;

// 	strcat = ft_strtrim(argv[1], sep);
// 	argc = 0;
// 	printf("%s\n", strcat);
// 	return (0);
// }
