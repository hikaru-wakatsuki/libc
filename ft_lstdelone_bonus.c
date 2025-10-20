/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 22:12:12 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/20 22:46:25 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	// if (!lst || !del)
	// 	return ;
	del(lst->content);
	free(lst);
	return ;
}

// void	del_content(void *c)
// {
// 	c = NULL;
// }

// #include <stdio.h>

// int	main()
// {
// 	t_list	*l;

// 	l = ft_lstnew(strdup("1"));
// 	l->next = ft_lstnew(strdup("2"));
// 	ft_lstdelone(l, del_content(l->content));
// 	printf("%s\n", (char *)(l->content));
// }
