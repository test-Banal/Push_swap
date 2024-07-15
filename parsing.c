#include "push_swap.h"
#include "./libft/libft.h"

void	ft_check(int argc, char **argv)
{
	char	**tab;
	int		i;

	i = 0;
	if (argc == 2)
		tab = ft_split(argv[1], ' ');
	else if (argc > 2)
	{
		i = 1;
		tab = argv;
	}
	if (!ft_check_list(tab, i))
		ft_display_error_3(tab, argc);
	if (!ft_check_sorted(tab, argc))
	{
		if (argc == 2)
			ft_free_tab(tab);
		exit(0);
	}
	if (argc == 2)
		ft_free_tab(tab);
}

int	ft_check_list(char **tab, int i)
{
	long	nb;

	if (tab[0] == NULL)
		return (0);
	while (tab[i] != NULL)
	{
		if (tab[i][0] == '\0')
			return (0);
		if ((tab[i][0] == '-' || tab[i][0] == '+') && tab[i][1] == '\0')
			return (0);
		nb = ft_atoi(tab[i]);
		if (nb == 2147483650)
			return (0);
		if (!ft_is_num(tab[i]))
			return (0);
		if (nb < -2147483648 || nb > 2147483647)
			return (0);
		if (!ft_check_double(nb, tab, i))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_sorted(char **tab, int argc)
{
	int	i;
	int	first;
	int	second;

	i = 0;
	if (argc > 2)
		i = 1;
	while (tab[i] != NULL && tab[i + 1] != NULL)
	{
		first = ft_atoi(tab[i]);
		second = ft_atoi(tab[i + 1]);
		if (first > second)
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_double(int nbr, char **tab, int i)
{
	i++;
	while (tab[i])
	{
		if (nbr == ft_atoi(tab[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_num(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
