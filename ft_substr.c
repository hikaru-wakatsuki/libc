/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 03:44:54 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/15 03:46:13 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char const	*str;
	int	i;

	str = (char const *)malloc(sizeof(char) * len);
	if (!str)
		return(NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
}

int	ft_strlen(char *str)
{

}
