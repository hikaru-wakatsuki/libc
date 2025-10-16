/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:20:51 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/16 19:24:01 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);

	if (size > dest_len)
	{
		dst += dest_len;
		while (size > dest_len + 1 && *src)
		{
			*(dst++) = *(src++);
			size--;
		}
		*dst = '\0';
		return (dest_len + src_len);
	}
	else
		return (dest_len + size);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dest[10] = "ABCD";
// 	char	src[] = "EF";

// 	printf("dest = %s\n", dest);
// 	printf("src = %s\n", src);
// 	size_t i;
// 	i = ft_strlcat(dest, src, 7);
// 	printf("ft_strlcat = %ld\n", i);
// 	printf("dest = %s\n", dest);
// 	printf("src = %s\n", src);
// }
