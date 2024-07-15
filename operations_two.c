#include "./libft/libft.h"
#include "push_swap.h"

void	ft_op_rotate(t_list **stack)
{
	t_list	*last;
	t_list	*first;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	last = *stack;
	first = *stack;
	while (last->next != NULL)
		last = last->next;
	*stack = first->next;
	first->next = NULL;
	last->next = first;
}

void	ft_ra(t_list **stack_a)
{
	ft_op_rotate(stack_a);
	write(1, "ra\n", 3);
	return ;
}

void	ft_rb(t_list **stack_b)
{
	ft_op_rotate(stack_b);
	write(1, "rb\n", 3);
	return ;
}

void	ft_rr(t_list **stack_a, t_list **stack_b)
{
	ft_op_rotate(stack_a);
	ft_op_rotate(stack_b);
	write(1, "rr\n", 3);
	return ;
}
