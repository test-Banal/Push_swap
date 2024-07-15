#include "libft.h"

void	*ft_memcpy(void	*dest, void const *src, size_t n)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (i < n)
	{
		*(unsigned char *)(d + i) = *(unsigned char *)(s + i);
		i++;
	}
	return (dest);
}
