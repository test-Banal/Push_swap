#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	const char	*last;

	last = NULL;
	if (c == '\0')
		return ((char *)str + ft_strlen(str));
	while (*str != '\0')
	{
		if (*str == (char)c)
			last = str;
		str++;
	}
	return ((char *)last);
}
