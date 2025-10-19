/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:11:34 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/19 14:04:09 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	s += i;
	if (*s == (const char)c)
		return ((char *)s);
	s--;
	while (*s)
	{
		if (*s == (const char)c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main()
// {
// 	const char s[] = "Hello";
// 	char c = 'l';

// 	printf("%s", ft_strrchr(s, (int)c));
// }
