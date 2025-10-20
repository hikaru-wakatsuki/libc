/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:25:36 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/20 22:04:39 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_lst;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last_lst = ft_lstlast(*lst);
	last_lst->next = new;
}

// #include <stdio.h>

// int	main()
// {
// 	t_list	*l;
// 	t_list	*n;

// 	l = ft_lstnew(strdup("1"));
// 	l->next = ft_lstnew(strdup("2"));
// 	n = ft_lstnew(strdup("a"));
// 	ft_lstadd_back(&l, n);
// 	printf("%s\n", (char *)(l->content));
// 	printf("%s\n", (char *)l->next->content);
// 	printf("%s\n", (char *)l->next->next->content);
// }
