#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(int *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst)
	{
		f(&lst->content);
		lst = lst->next;
	}
}
