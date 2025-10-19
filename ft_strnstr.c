/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:01:42 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/19 14:36:17 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	i = 0;
	while (*big && (i++) + little_len <= len)
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
// 	char	str[] = "aaabcabcd";
// 	char	to_find[] = "cd";
// 	int i = 8;
// 	printf("%s\n", ft_strnstr(str, to_find, i));
// }
