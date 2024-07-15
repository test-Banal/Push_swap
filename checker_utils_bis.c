/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils_bis.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneumann <aneumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 16:52:34 by aneumann          #+#    #+#             */
/*   Updated: 2024/07/15 13:29:03 by aneumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

int	ft_checksorted(t_list *stack_a)
{
	int	i;

	i = stack_a->content;
	while (stack_a)
	{
		if (i > stack_a->content)
			return (0);
		i = stack_a->content;
		stack_a = stack_a->next;
	}
	return (1);
}

void	ft_check_sub(t_list **a, t_list **b, char *line)
{
	if (line[2] == 'a')
		ft_rra_check(a);
	else if (line[2] == 'b')
		ft_rrb_check(b);
	else if (line[2] == 'r')
		ft_rrr_check(a, b);
}

void	ft_error_gnl(char *line, t_list **a, t_list **b)
{
	write(1, "Error\n", 6);
	ft_free(a);
	ft_free(b);
	free(line);
	exit(1);
}	

char	*ft_check_op(t_list **a, t_list **b, char *line)
{
	if (line[0] == 's' && line[1] == 'a' && line[2] == '\n' && ft_lstsize(*a) >= 2)
		ft_sa_check(a);
	else if (line[0] == 's' && line[1] == 'b' && line[2] == '\n' && ft_lstsize(*b) >= 2)
		ft_sb_check(b);
	else if (line[0] == 'p' && line[1] == 'a' && line[2] == '\n' && ft_lstsize(*b) >= 1)
		ft_pa_check(b, a);
	else if (line[0] == 'p' && line[1] == 'b' && line[2] == '\n' && ft_lstsize(*a) >= 1)
		ft_pb_check(a, b);
	else if (line[0] == 'r' && line[1] == 'a' && line[2] == '\n' && ft_lstsize(*a) >= 2)
		ft_ra_check(a);
	else if (line[0] == 'r' && line[1] == 'b' && line[2] == '\n' && ft_lstsize(*b) >= 2)
		ft_rb_check(b);
	else if (line[0] == 'r' && line[1] == 'r' && line[3] == '\n' && ft_lstsize(*a) >= 2 && ft_lstsize(*b) >= 2)
		ft_check_sub(a, b, line);
	else if (line[0] == 'r' && line[1] == 'r' && line[2] == '\n' && ft_lstsize(*a) >= 2 && ft_lstsize(*b) >= 2)
		ft_rr_check(a, b);
	else if (line[0] == 's' && line[1] == 's' && line[2] == '\n' && ft_lstsize(*a) >= 1 && ft_lstsize(*b) >= 1)
		ft_ss_check(a, b);
	else
		ft_error_gnl(line, a, b);
	return (get_next_line(0));
}

void	ft_checker_sub(t_list **a, t_list **b, char *line)
{
	char	*tmp;

	while (line && *line != '\n')
	{
		tmp = line;
		line = ft_check_op(a, b, line);
		free(tmp);
	}
	if (*b)
		write(1, "KO\n", 3);
	else if (!ft_checksorted(*a))
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
	free(line);
}
