/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:24:43 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/16 19:47:28 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (97 <= c && c <= 122)
		return (c - 32);
	return (c);
}

#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char c = 'a';
	printf("%c\ntoupper = %d\n", c, toupper(c));
	printf("ft_toupper = %d\n", ft_toupper(c));
}
