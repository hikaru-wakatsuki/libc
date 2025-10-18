/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 15:06:41 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/18 16:51:19 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	join = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!join)
		return (NULL);
	while (*s1)
		*(join++) = *(s1++);
	while (*s2)
		*(join++) = *(s2++);
	*join = '\0';
	return (join - s1_len - s2_len);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s1[] = "ABCD";
// 	char	s2[] = "EF";

// 	printf("s1 = %s\n", s1);
// 	printf("s2 = %s\n", s2);
// 	printf("ft_strjoin = %s\n", ft_strjoin(s1, s2));
// }
