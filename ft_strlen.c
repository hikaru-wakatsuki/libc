/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 07:08:20 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/15 07:24:24 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

//#include <stdio.h>

//int	main()
//{
//	char c[] = "Hello";
//	printf("%s\nstrlen = %zu\n", c, strlen(c));
//	printf("ft_strlen = %zu\n", ft_strlen(c));
//}
