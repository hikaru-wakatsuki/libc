/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 19:43:14 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/20 20:19:00 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 1;
	if (!lst)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// #include <stdio.h>

// int	main()
// {
// 	t_list	*l;

//     l = ft_lstnew(strdup("1"));
//     l->next = ft_lstnew(strdup("2"));
//     l->next->next = ft_lstnew(strdup("3"));
// 	printf("%d", ft_lstsize(l));
// }
