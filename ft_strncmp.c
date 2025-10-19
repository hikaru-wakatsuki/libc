/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:28:58 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/19 16:07:26 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	unsigned const char	*us1;
	unsigned const char	*us2;

	us1 = (unsigned const char *)s1;
	us2 = (unsigned const char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i + 1 < n && us1[i])
	{
		if (us1[i] != us2[i])
			return ((int)(us1[i] - us2[i]));
		i++;
	}
	return ((int)(us1[i] - us2[i]));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s1[] = "\200";
// 	char	s2[] = "\0";

// 	printf("%d\n", ft_strncmp(s1, s2, 1));
// 	printf("%d\n", strncmp(s1, s2, 1));
// 	return (0);
// }
