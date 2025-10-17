/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:43:29 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/17 22:06:35 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long	sign;
	long	nbr;

	while ((9 <= *nptr && *nptr <= 13) || (*nptr == ' '))
		nptr++;
	sign = 1;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	nbr = 0;
	while ('0' <= *nptr && *nptr <= '9')
	{
		nbr *= 10;
		nbr += (long)*nptr - '0';
		nptr++;
	}
	return ((int)(sign * nbr));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "   -2147483648ab567";

// 	printf("%d", ft_atoi(str));
// }
