/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 03:44:45 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/23 21:31:23 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

//#include <stdio.h>
//#include <ctype.h>

//int	main(void)
//{
//	char c = '0';
//	printf("%c\nisalnum = %d\n", c, isalnum(c));
//	printf("ft_isalnum = %d\n", ft_isalnum(c));
//}
