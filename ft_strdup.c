/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 23:22:44 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/17 23:38:56 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*dup;

	s_len = ft_strlen(s);
	dup = (char *)malloc(sizeof(char) * (s_len + 1));
	if (!dup)
		return (NULL);
	dup[s_len] = '\0';
	while (*s)
		*(dup++) = *(s++);
	dup -= s_len;
	return (dup);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	src[] = "Hello";
// 	char	*dup;

// 	dup = ft_strdup(src);
// 	printf("%s\n", dup);
// 	free(dup);
// 	return (0);
// }
