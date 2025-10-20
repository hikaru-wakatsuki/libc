/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 06:39:14 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/20 18:45:40 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if ((0 <= c && c <= 127))
		return (1);
	return (0);
}

//#include <stdio.h>
//#include <ctype.h>

//int	main(void)
//{
//	char c = '0';
//	printf("%c\nisascii = %d\n", c, isascii(c));
//	printf("ft_isascii = %d\n", ft_isascii(c));
//}
