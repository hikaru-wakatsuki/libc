/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 08:05:54 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/17 17:56:18 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	b[] = "Hello";
// 	int i = 0;
// 	int n = 3;
// 	ft_bzero(b, n);
// 	printf("ft_bzero = ");
// 	while (i < 5)
// 	{
// 		printf("%c", b[(i++)]);
// 	}
// 	printf("\n");

// }
