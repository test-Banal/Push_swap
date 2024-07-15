/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneumann <aneumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:50:21 by aneumann          #+#    #+#             */
/*   Updated: 2024/05/15 20:18:24 by aneumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int content)
{
	t_list	*new_element;

	new_element = NULL;
	new_element = (t_list *)malloc(sizeof(t_list));
	if (!(new_element))
		return (NULL);
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}
