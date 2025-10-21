/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 22:12:12 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/21 11:57:15 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// void	del_content(void *c)
// {
//	free(c);
// }

// #include <stdio.h>

// int	main()
// {
// 	t_list	*l;

// 	l = ft_lstnew(strdup("1"));
// 	ft_lstdelone(l, del_content);
// 	printf("%s\n", (char *)(l->content));
// }
