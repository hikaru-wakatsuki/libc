/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 21:16:29 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/24 04:57:58 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest2;
	unsigned char	*src2;

	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	if (*dest2 == *src2)
		return (dest);
	i = 0;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char src[] = "Hello";
// 	char dest[] = "12345";
// 	char src2[] = "Hello";
// 	char dest2[] = "12345";

// 	ft_memcpy(dest, src, 3);
// 	printf("ft_memcpy = %s\n", dest);
// 	ft_memcpy(dest2, src2, 3);
// 	printf("ft_memcpy = %s\n", dest2);
// }
