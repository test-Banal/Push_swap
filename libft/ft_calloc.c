#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*stock;

	if (size && (nmemb > SIZE_MAX / size))
		return (NULL);
	stock = malloc(nmemb * size);
	if (!(stock))
		return (NULL);
	ft_bzero(stock, nmemb * size);
	return (stock);
}
