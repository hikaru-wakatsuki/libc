/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:12:40 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/21 12:35:31 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

//void	ft_aset(void *b)
//{
//	unsigned char	*ub;
//	size_t			i;

//	ub = (unsigned char *)b;
//	i = 0;
//	while (i < 5)
//	{
//		ub[(i++)] = 'a';
//	}
//}

//#include <stdio.h>

//int	main()
//{
//	t_list	*l;

//	l = ft_lstnew(strdup("hello"));
//	ft_lstiter(l, ft_aset);
//	printf("%s\n", (char *)l->content);
//}
