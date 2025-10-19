/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 01:23:03 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/19 02:57:36 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	n_count(long nb)
{
	long	sign;
	long	count;

	if (nb < 0)
	{
		sign = 1;
		nb *= -1;
	}
	else if (nb == 0)
		return (1);
	while ()
	{
		count++;
	}

	return (count + sign);

}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	long	sign;
	long	index;

	nb = n;
	sign = 0;
	str = (char *)malloc(sizeof(char) * (index + 1));
	if (!str)
		return (NULL);
	str[(index--)] = '\0';
	if (nb < 0)
	{
		nb *= -1;
		*(str++) = '-';
	}
	while (index > 0)
	{
		str[index] = (nb % 10) + '0';
		nb /= 10;
		index--;
	}
	return (str);
}

 #include <stdio.h>

 int	main(void)
 {
	int	nbr = INT_MIN;
 	char	*str;

 	str = ft_itoa(nbr);
 	printf("%s\n", str);
 	free(str);
 }
