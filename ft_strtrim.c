/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:14:40 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/19 22:44:20 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static bool	is_set(char const to_find, char const *set)
{
	while (*set)
	{
		if (*set == to_find)
			return (true);
		set++;
	}
	return (false);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	end;
	size_t	trim_len;

	start = 0;
	while (is_set(s1[start], set) && s1[start])
		start++;
	end = ft_strlen(s1);
	while (is_set(s1[end - 1], set) && end > start)
		end--;
	trim_len = end - start;
	trim = (char *)malloc(sizeof(char) * (trim_len + 1));
	if (!trim)
		return (NULL);
	trim[trim_len] = '\0';
	while ((trim_len--) > 0)
	{
		trim[trim_len] = s1[end - 1];
		end--;
	}
	return (trim);
}

// #include <stdio.h>

// int	main()
// {
// 	char	sep[] = "1";
// 	char	s1[] = "11122122111";
// 	char	*trim;

// 	trim = ft_strtrim(s1, sep);
// 	printf("%s\n", trim);
// 	return (0);
// }
