/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 04:24:10 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/17 17:17:54 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*dest2;
	unsigned char	*src2;

	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	if (dest >= src)
	{
		while (len > 0)
		{
			len--;
			dest2[len] = src2[len];
		}
	}
	else
		ft_memcpy(dest, src, len);
	return (dest);
}

//  #include <stdio.h>

//  int	main(void)
//  {
//  	char dest[] = "12345";
// 	char dest2[] = "12345";


//  	ft_memmove(dest, dest + 2, 3);
// 	memmove(dest2, dest2 + 2, 3);

//  	printf("%s\n", dest);
//  	printf("%s\n", dest2);

//  }
