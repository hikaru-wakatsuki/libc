/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 22:00:13 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/23 21:13:33 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	uc;
	size_t			i;

	str = (unsigned char *)s;
	uc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == uc)
			return ((void *)str);
		str++;
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

//  int	main(void)
//  {
//  	char s[] = "Hello\0";
//  	char c = 'l';

//  	printf("%s\n", (char *)ft_memchr(s, (int)c, 3));
//  }
