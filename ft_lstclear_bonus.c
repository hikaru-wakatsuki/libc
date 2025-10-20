/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 15:33:19 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/20 17:44:38 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	ft_lstdelone(lst, del);
}

void	del_content(void *c)
{
	free(c);
}

#include <stdio.h>

int	main(void)
{
	t_list	*l;

	l = ft_lstnew(strdup("1"));
	ft_lstdelone(l, del_content);
	printf("%s\n", (char *)(l->content));
}
