/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneumann <aneumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 19:56:53 by aneumann          #+#    #+#             */
/*   Updated: 2024/07/11 20:35:22 by aneumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

void	ft_display_error_3(char **tab, int argc)
{
	ft_putstr_fd("Error\n", 2);
	if (argc == 2)
		ft_free_tab(tab);
	exit(0);
}

void	ft_lst_delete(t_list **stack)
{
	t_list	*tmp;

	if (*stack == NULL)
		return ;
	tmp = *stack;
	while (*stack != NULL)
	{
		tmp = (*stack)->next;
		free (*stack);
		*stack = tmp;
	}
}

void	ft_free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return ;
}

void	ft_check_inverted(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *stack_a;
	tmp2 = tmp->next;
	while (tmp2 != NULL)
	{
		if (tmp->content < tmp2->content)
			return ;
		tmp = tmp->next;
		tmp2 = tmp2->next;
	}
	ft_sa(stack_a);
	return ;
}
