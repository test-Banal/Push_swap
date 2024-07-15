#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(int *))
{
	t_list	*temp;

	if (del == NULL || lst == NULL || *lst == NULL)
		return ;
	while (lst && *lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
