/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 22:10:36 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/18 15:34:39 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*cal;

	if (!nmemb || !size)
		return (malloc(0));
	if (nmemb >= INT_MAX / size)
		return (NULL);
	cal = malloc(nmemb * size);
	if (!cal)
		return (NULL);
	ft_bzero(cal, nmemb * size);
	return (cal);
}

// #include <stdio.h>

// int	main()
// {
// 	size_t	nmemb = 5;
// 	size_t	size = sizeof(char);
// 	size_t	i = 0;
// 	char *str;

// 	str = (char *)ft_calloc(nmemb, size);
// 	if (!nmemb || !size)
// 	{
// 		free(str);
// 		return (1);
// 	}
// 	if (!str)
// 		return (1);
// 	str[nmemb - 1] = '\0';
// 	while (i + 1 < nmemb)
// 	{
// 		str[(i++)] = 'a';
// 	}
// 	printf("%s", str);
// 	free(str);
// 	return (0);
// }
