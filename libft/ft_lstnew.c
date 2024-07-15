#include "libft.h"

t_list	*ft_lstnew(int content)
{
	t_list	*new_element;

	new_element = NULL;
	new_element = (t_list *)malloc(sizeof(t_list));
	if (!(new_element))
		return (NULL);
	new_element->content = content;
	new_element->next = NULL;
	return (new_element);
}
