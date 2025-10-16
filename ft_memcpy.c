/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 21:16:29 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/16 21:26:08 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	size_t	src_len;
	char	*dest2;
	char	*src2;

	dest2 = (char *)dest;
	src2 = (char *)src;
	src_len = ft_strlen(src2);
	i = 0;
	while (i < src_len && i < n)
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

// 	ft_memcpy(dest, src, 3);
// 	printf("%s\n", dest);
// }
