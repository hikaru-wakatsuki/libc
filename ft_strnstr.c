/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:01:42 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/17 20:38:53 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	little_len = ft_strlen(little);
	i = 0;
	if (little_len == 0)
		return ((char *)big);
	while (*big && (i++) < len)
	{
		if (*big == *little)
			if (ft_strncmp(big, little, little_len) == 0)
				return ((char *)big);
		big++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "ABCDE";
// 	char	to_find[] = "CD";
// 	int i = 5;
// 	printf("%s\n", ft_strnstr(str, to_find, i));
// }
