/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 07:29:15 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/17 17:09:05 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ub;
	unsigned char	uc;
	size_t			i;

	ub = (unsigned char *)b;
	uc = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		ub[(i++)] = uc;
	}
	return (ub);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	b[] = "Hello";
// 	char	c;

// 	c = 'a';
// 	ft_memset(b, (int)c, 3);
// 	printf("ft_memset = %s\n", b);
// }
