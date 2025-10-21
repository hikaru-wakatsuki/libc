/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwakatsu <hwakatsu@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 12:37:39 by hwakatsu          #+#    #+#             */
/*   Updated: 2025/10/21 15:59:14 by hwakatsu         ###   ########.fr       */
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

//void	*f_uppercase(void *content)
//{
//	char	*str;
//	char	*new_str;
//	int		i;

//	str = (char *)content;
//	new_str = strdup(str);
//	if (!new_str)
//		return (NULL);
//	i = 0;
//	while (new_str[i])
//	{
//		if (new_str[i] >= 'a' && new_str[i] <= 'z')
//			new_str[i] -= 32;
//		i++;
//	}
//	return (new_str);
//}

//void	del_str(void *content)
//{
//	free(content);
//}

//#include <stdio.h>

//int	main()
//{
//	t_list	*lst;
//	t_list	*new_lst;

//	lst = NULL;
//	ft_lstadd_back(&lst, ft_lstnew(strdup("hello")));
//	new_lst = ft_lstmap(lst, f_uppercase, del_str);
//	printf("list = %s\n", (char *)lst->content);
//	printf("new_list = %s\n", (char *)new_lst->content);
//}
