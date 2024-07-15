#include "libft.h"

int	ft_strncmp(char const *str1, char const *str2, size_t n)
{
	while (0 < n && (*str1 || *str2))
	{
		if ((unsigned char)*str1 != (unsigned char)*str2)
			return ((int)((unsigned char)*str1 - (unsigned char)*str2));
		str1++;
		str2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((int)((unsigned char)*str1 - (unsigned char)*str2));
}
