/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:37:39 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/21 13:53:27 by hwakatsu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newlst_tmp;
	void	*f_content;

	newlst = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		f_content = f(lst->content);
		newlst_tmp = ft_lstnew(f_content);
		if (!newlst_tmp)
		{
			ft_lstclear(&newlst, del);
			del(f_content);
			return (NULL);
		}
		ft_lstadd_back(&newlst, newlst_tmp);
		lst = lst->next;
	}
	return (newlst);
}

// void	*f_uppercase(void *content)
//{
//	char	*str;
//	char	*new_str;

//	str = (char *)content;
//	new_str = strdup(str);
//	if (!new_str)
//		return (NULL);
//	for (int i = 0; new_str[i]; i++)
//		if (new_str[i] >= 'a' && new_str[i] <= 'z')
//			new_str[i] -= 32;
//	return (new_str);
//}

// void	del_str(void *content)
//{
//	free(content);
// }

// #include <stdio.h>

// int	main(void)
//{
//	t_list	*list;
//	t_list	*new_list;
//	t_list	*tmp;

//	list = NULL;
//	ft_lstadd_back(&list, ft_lstnew(strdup("hello")));
//	ft_lstadd_back(&list, ft_lstnew(strdup("world")));
//	ft_lstadd_back(&list, ft_lstnew(strdup("42tokyo")));
//	new_list = ft_lstmap(list, f_uppercase, del_str);
//	printf("Original list:\n");
//	tmp = list;
//	while (tmp)
//	{
//		printf("%s\n", (char *)tmp->content);
//		tmp = tmp->next;
//	}
//	printf("\nMapped list:\n");
//	tmp = new_list;
//	while (tmp)
//	{
//		printf("%s\n", (char *)tmp->content);
//		tmp = tmp->next;
//	}
//	ft_lstclear(&list, del_str);
//	ft_lstclear(&new_list, del_str);
//	return (0);
//}
