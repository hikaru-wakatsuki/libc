/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 07:29:15 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/15 08:04:27 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ub;
	unsigned char	uc;
	int	i;

	ub = b;
	uc = c;
	i = 0;
	while (i < len)
	{
		ub[(i++)] = uc;
	}
	return (ub);
}

//#include <stdio.h>

//int	main(void)
//{
//	char b[]= "Hello";
//	char c = '0';
//	ft_memset(b, c, 3);
//	printf("ft_memset = %s\n", b);
//}
