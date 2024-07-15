#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;
	char	value;
	size_t	i;

	p = s;
	value = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		p[i] = value;
		i++;
	}
	return (p);
}
