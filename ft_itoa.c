/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 01:23:03 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/19 13:21:49 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	n_count(long nb)
{
	long	sign;
	long	count;

	sign = 0;
	if (nb < 0)
	{
		sign = 1;
		nb *= -1;
	}
	else if (nb == 0)
		return (1);
	count = 0;
	while (nb > 0)
	{
		nb /= 10;
		count++;
	}
	return (count + sign);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	long	index;

	nb = n;
	index = n_count(nb);
	str = (char *)malloc(sizeof(char) * (index + 1));
	if (!str)
		return (NULL);
	str[(index--)] = '\0';
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-';
	}
	else if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		str[index] = (nb % 10) + '0';
		nb /= 10;
		index--;
	}
	return (str);
}

//  #include <stdio.h>

//  int	main(void)
//  {
// 	int	nbr = 0;
// 	int	nbr2 = INT_MIN;
// 	int	nbr3 = INT_MAX;
//  	char	*str;
//  	char	*str2;
//  	char	*str3;

//  	str = ft_itoa(nbr);
//  	str2 = ft_itoa(nbr2);
//  	str3 = ft_itoa(nbr3);
//  	printf("INT_MIN = %s\n", str2);
//  	printf("INT_MAX = %s\n", str3);
//  	printf("zero = %s\n", str);
//  	free(str);
//  }
