/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:33:19 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/21 12:09:45 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

// void	del_content(void *c)
//{
//	free(c);
// }

// #include <stdio.h>

// int	main(void)
//{
//	t_list	*l;

//	l = ft_lstnew(strdup("1"));
//	l->next = ft_lstnew(strdup("2"));
//	ft_lstclear(&l, del_content);
//	printf("%s\n", (char *)(l->content));
//}
