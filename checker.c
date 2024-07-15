#include "push_swap.h"
#include "./libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

// i = ft_strlen(str);
//	if (i > 10)
//		ft_error_ch();

void	ft_error_sec(void)
{
	write(1, "Error\n", 6);
	exit(1);
}

int	ft_atoi2(const char *str)
{
	int				mod;
	long long int	i;

	mod = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		str++;
	if (*str == '-')
	{
		mod = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			ft_error_sec();
		i = i * 10 + (*str - 48);
		str++;
	}
	if ((mod * i) > 2147483647 || (mod * i) < -2147483648)
		return (2147383650);
	return (mod * i);
}

t_list	*ft_sub_process(char **argv)
{
	t_list		*a;
	char		**tmp;
	int			i;
	long int	j;

	a = NULL;
	i = 0;
	tmp = ft_split(argv[1], 32);
	while (tmp[i])
	{
		j = ft_atoi2(tmp[i]);
		if (j == 2147383650)
			ft_error_ch(&a);
		ft_add_back(&a, ft_stack_new(j));
		i++;
	}
	ft_freestr(tmp);
	free(tmp);
	return (a);
}

t_list	*ft_process(int argc, char **argv)
{
	t_list		*a;
	int			i;
	long int	j;

	i = 1;
	a = NULL;
	if (argc < 2)
		ft_error_sec();
	if (argc == 2)
		a = ft_sub_process(argv);
	else
	{
		while (i < argc)
		{
			j = ft_atoi2(argv[i]);
			if (j == 2147383650)
				ft_error_ch(&a);
			ft_add_back(&a, ft_stack_new(j));
			i++;
		}
	}
	return (a);
}

// static void	printlist(t_list *data)
// {
// 	t_list	*current;

// 	current = data;
// 	while (current != NULL)
// 	{
// 		printf("valeur = [%d]\n", current->content);
// 		current = current->next;
// 	}
// }

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	char	*line;

	b = NULL;
	a = ft_process(argc, argv);
	if (!a || ft_checkdup(a))
	{
		ft_free (&a);
		ft_error_sec();
	}
	line = get_next_line(0);
	if (!line && !ft_checksorted(a))
		write(1, "KO\n", 3);
	else if (!line && ft_checksorted(a))
		write(1, "OK\n", 3);
	else
		ft_checker_sub(&a, &b, line);
	ft_free(&b);
	ft_free(&a);
	return (0);
}
