/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneumann <aneumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:25:59 by aneumann          #+#    #+#             */
/*   Updated: 2024/05/17 07:59:59 by aneumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, int *(*f)(int *), void (*del)(int *))
{
	t_list	*node;
	t_list	*newlst;

	if (!lst)
		return (lst);
	newlst = NULL;
	while (lst)
	{
		node = ft_lstnew(*f(&lst->content));
		if (!(node))
		{
			ft_lstclear(&newlst, (*del));
			return (NULL);
		}
		ft_lstadd_back(&newlst, node);
		lst = lst->next;
	}
	return (newlst);
}
