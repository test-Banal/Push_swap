/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_one.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneumann <aneumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 07:15:21 by aneumann          #+#    #+#             */
/*   Updated: 2024/07/09 11:22:09 by aneumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

void	ft_sa(t_list **stack_a)
{
	ft_op_swip(stack_a);
	write(1, "sa\n", 3);
	return ;
}

void	ft_op_swip(t_list **stack)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *stack;
	tmp2 = tmp->next;
	*stack = tmp2;
	tmp->next = tmp2->next;
	tmp2->next = tmp;
}

void	ft_sb(t_list **stack_b)
{
	ft_op_swip(stack_b);
	write(1, "sb\n", 3);
	return ;
}

void	ft_ss(t_list **stack_a, t_list **stack_b)
{
	ft_op_swip(stack_a);
	ft_op_swip(stack_b);
	write(1, "ss\n", 3);
	return ;
}

void	ft_pa(t_list **stack_b, t_list **stack_a)
{
	t_list	*tmp;

	if (*stack_b == NULL)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
	write(1, "pa\n", 3);
	return ;
}
