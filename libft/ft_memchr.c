#include "libft.h"

void	*ft_memchr(void const *buf, int value, size_t count)
{
	const unsigned char	*p = (unsigned char*)buf;

	while (count > 0)
	{
		if (*p == (unsigned char)value)
			return ((void *)p);
		p++;
		count--;
	}
	return (NULL);
}
