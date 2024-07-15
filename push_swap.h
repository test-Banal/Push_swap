#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include <string.h>

# include "./libft/libft.h"

void	ft_display_error_3(char **tab, int argc);
void	ft_free_tab(char **tab);
void	ft_check(int argc, char **argv);
int		ft_check_sorted(char **tab, int argc);
int		ft_check_list(char **tab, int i);
int		ft_is_num(char *str);
int		ft_check_double(int nbr, char **tab, int i);
void	ft_initialise(t_list **stack_a, int argc, char **argv, int i);
void	ft_initialise_2(t_list **stack_a, char **argv);
void	ft_check_inverted(t_list **stack_a);
void	ft_lst_split(t_list **stack_a, t_list **stack_b, int size);
void	ft_lst_delete(t_list **stack);

//operations
void	ft_op_swip(t_list **stack);
void	ft_op_rotate(t_list **stack);
void	ft_op_rev_rotate(t_list **stack);
void	ft_sa(t_list **stack_a);
void	ft_sb(t_list **stack_b);
void	ft_ss(t_list **stack_a, t_list **stack_b);
void	ft_pa(t_list **stack_b, t_list **stack_a);
void	ft_pb(t_list **stack_a, t_list **stack_b);
void	ft_ra(t_list **stack_a);
void	ft_rb(t_list **stack_b);
void	ft_rr(t_list **stack_a, t_list **stack_b);
void	ft_rra(t_list **stack_a);
void	ft_rrb(t_list **stack_b);
void	ft_rrr(t_list **stack_a, t_list **stack_b);
void	ft_sort_three(t_list **stack_a);
void	ft_sort_five(t_list **stack_a, t_list **stack_b);

void	ft_move_to_b(t_list **stack_a, t_list **stack_b, int *lis, int max);
void	ft_move_to_a(t_list **stack_a, t_list **stack_b);
int		ft_best_nbr_b(t_list **stack_b, int size_b,
			t_list **stack_a, int size_a);
int		ft_best_nbr_a(t_list *stack_a, int size, int *lis, int max);
int		ft_best_comb(int *arr_a, int *arr_b, int size);
int		ft_best_comb_helper(int *arr_a, int *arr_b, int *tmp, int size);
int		ft_move_a(int a, int b, t_list **stack_a, t_list **stack_b);
void	ft_search_min(t_list **stack_a, int size);

int		*ft_copy_cont(t_list *stack_a, int size);
int		*ft_intcpy(int	*arr, int size);
int		ft_the_needed_a(t_list *stack_a, int cont, int size);
int		ft_the_needed_b(int max, int size);
int		ft_max_or_min(t_list *stack_a, int cont, int size);
int		return_max_or_min(int cont, int *max_n_min, int size);
int		ft_max_nbr(int a, int b);
int		*ft_define_lis(int *dst, int size, int *max);
int		*ft_lis_util(int *dst, int *arr, int max, int size);

//bonus
void	ft_freestr(char **lst);
void	ft_free(t_list **lst);
void	ft_error_ch(t_list **stack_a);
t_list	*ft_process(int argc, char **argv);
t_list	*ft_sub_process(char **argv);
void	ft_checker_sub(t_list **a, t_list **b, char *line);
int		ft_checksorted(t_list *stack_a);
int		ft_checkdup(t_list *a);
void	ft_error_sec(void);
char	*ft_check_op(t_list **a, t_list **b, char *line);
void	ft_check_sub(t_list **a, t_list **b, char *line);
int		ft_atoi2(const char *str);
void	ft_add_back(t_list **stack, t_list *stack_new);
t_list	*ft_stack_new(int nbr);
void	ft_sa_check(t_list **stack_a);
void	ft_sb_check(t_list **stack_b);
void	ft_ss_check(t_list **stack_a, t_list **stack_b);
void	ft_pa_check(t_list **stack_b, t_list **stack_a);
void	ft_pb_check(t_list **stack_a, t_list **stack_b);
void	ft_ra_check(t_list **stack_a);
void	ft_rb_check(t_list **stack_b);
void	ft_rr_check(t_list **stack_a, t_list **stack_b);
void	ft_rra_check(t_list **stack_a);
void	ft_rrb_check(t_list **stack_b);
void	ft_rrr_check(t_list **stack_a, t_list **stack_b);
void	ft_error_gnl(char *line, t_list **a, t_list **b);

#endif