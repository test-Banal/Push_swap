#include "libft.h"

size_t	ft_strlen(char const *c)
{
	int	a;

	a = 0;
	while (c[a] != '\0')
		a++;
	return (a);
}
