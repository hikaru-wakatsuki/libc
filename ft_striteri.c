/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 10:19:27 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/19 21:46:33 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	index;

	index = 0;
	while (s[index])
	{
		f(index, &s[index]);
		index++;
	}
}

// void	b_a(unsigned int i, char *str)
// {
// 	str[i] = 'a';
// }

// #include <stdio.h>

// int	main(void)
// {
// 	char s[] = "HELLO";
// 	ft_striteri(s, b_a);
// 	printf("ft_striteri = %s\n", s);
// }
