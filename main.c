/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneumann <aneumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:49:59 by aneumann          #+#    #+#             */
/*   Updated: 2024/07/12 13:23:09 by aneumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

// ARG="`shuf -i 1000-100000 -n 100 | tr "\n" " "`";
// ./push_swap $ARG | ./checker_linux $ARG

// static void    printlist(t_list *data)
// {
//      t_list    *current;

//     current = data;
//     while (current != NULL)
//     {
//         printf("valeur =[%d]\n", current->content);
//         current = current->next;
//     }
// }

void	ft_lst_split_2(t_list **stack_a, t_list **stack_b, int size)
{
	if (size == 2)
	{
		if ((*stack_a)->content > (*stack_a)->next->content)
			ft_sa(stack_a);
		return ;
	}
	if (size == 3)
	{
		ft_sort_three(stack_a);
		return ;
	}
	if (size == 5)
	{
		ft_sort_five(stack_a, stack_b);
		return ;
	}
}

void	ft_lst_split(t_list **stack_a, t_list **stack_b, int size)
{
	int	*dst;
	int	*arr;
	int	i;

	i = 0;
	if (size == 2 || size == 5 || size == 3)
	{
		ft_lst_split_2(stack_a, stack_b, size);
		return ;
	}
	dst = ft_copy_cont(*stack_a, size);
	arr = ft_define_lis(dst, size, &i);
	ft_move_to_b(stack_a, stack_b, arr, i);
	ft_move_to_a(stack_a, stack_b);
	ft_search_min(stack_a, size);
	free(dst);
	free(arr);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		size;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		exit(0);
	ft_check(argc, argv);
	if (argc == 2)
		ft_initialise_2(&stack_a, argv);
	else if (argc > 2)
		ft_initialise(&stack_a, argc, argv, 1);
	size = ft_lstsize(stack_a);
	ft_lst_split(&stack_a, &stack_b, size);
	ft_lst_delete(&stack_a);
	ft_lst_delete(&stack_b);
	return (0);
}

void	ft_initialise_2(t_list **stack_a, char **argv)
{
	char	**tab;
	int		i;
	t_list	*tmp;

	i = 0;
	tab = ft_split(argv[1], ' ');
	while (tab[i] != NULL)
	{
		tmp = ft_lstnew(ft_atoi(tab[i]));
		ft_lstadd_back(stack_a, tmp);
		i++;
	}
	ft_free_tab(tab);
	tmp = NULL;
}

void	ft_initialise(t_list **stack_a, int argc, char **argv, int i)
{
	t_list	*tmp;

	tmp = NULL;
	while (i < argc)
	{
		tmp = ft_lstnew(ft_atoi(argv[i]));
		ft_lstadd_back(stack_a, tmp);
		i++;
	}
	tmp = NULL;
}
