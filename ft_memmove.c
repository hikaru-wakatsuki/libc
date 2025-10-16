/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 04:24:10 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/16 06:20:44 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t			i;
	char	*dest2;
	char	*src2;

	dest2 = (char *)dest;
	src2 = (char *)src;
	i = ft_strlen(src2);
	if (i > len)
		i = len;
	if (dest <= src)
	{
		while (i > 0)
		{
			dest2[i] = src2[i];
			i--;
		}
	}
	else
		ft_memcpy(dest, src, len);
	return (dest);
}

// #include <stdio.h>

// int	main()
// {
// 	char src[] = "Hello";
// 	char dest[] = "12345";

// 	ft_memmove(dest, src, 3);
// 	printf("%s", dest);
// }
