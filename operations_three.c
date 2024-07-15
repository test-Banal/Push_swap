#include "push_swap.h"
#include "./libft/libft.h"

void	ft_op_rev_rotate(t_list **stack)
{
	t_list	*last;
	t_list	*tmp;

	last = *stack;
	tmp = *stack;
	while (last->next != NULL)
	{
		tmp = last;
		last = last->next;
	}
	last->next = *stack;
	*stack = last;
	tmp->next = NULL;
}

void	ft_rra(t_list **stack_a)
{
	ft_op_rev_rotate(stack_a);
	write(1, "rra\n", 4);
	return ;
}

void	ft_rrb(t_list **stack_b)
{
	ft_op_rev_rotate(stack_b);
	write(1, "rrb\n", 4);
	return ;
}

void	ft_rrr(t_list **stack_a, t_list **stack_b)
{
	ft_op_rev_rotate(stack_a);
	ft_op_rev_rotate(stack_b);
	write(1, "rrr\n", 4);
	return ;
}

void	ft_pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (*stack_a == NULL)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next = *stack_b;
	*stack_b = tmp;
	write(1, "pb\n", 3);
	return ;
}
