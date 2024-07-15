#include "libft.h"

char	*ft_strdup(char const *s)
{
	char	*dest;
	int		leng_s;
	int		i;

	leng_s = ft_strlen((const char *)s);
	dest = (char *)malloc(sizeof(char) * (leng_s +1));
	if (!dest)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return ((char *)dest);
}

// char	*ft_strdup(char const *s)
// {
// 	char	*dest;
// 	int		lgr_str;
// 	int		a;

// 	a = 0;
// 	lgr_str = ft_strlen(s) + 1;
// 	dest = malloc(sizeof(const char) * lgr_str);
// 	if (!(dest))
// 		return (NULL);
// 	while (s[a] != '\0')
// 	{
// 		dest[a] = s[a];
// 		a++;
// 	}
// 	dest[a] = '\0';
// 	return ((char *)dest);
// }
