/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 03:44:27 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/15 03:46:00 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1024);
	return (0);
}

//#include <stdio.h>
//#include <ctype.h>

//int	main(void)
//{
//	char c = 'a';
//	printf("%c\nisalpha = %d\n", c, isalpha(c));
//	printf("ft_isalpha = %d\n", ft_isalpha(c));
//}
