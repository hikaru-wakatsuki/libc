/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 03:44:34 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/15 03:48:22 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (2048);
	return (0);
}

//#include <stdio.h>
//#include <ctype.h>

//int	main(void)
//{
//	char c = '0';
//	printf("%c\nisdigit = %d\n", c, isdigit(c));
//	printf("ft_isdigit = %d\n", ft_isdigit(c));
//}
