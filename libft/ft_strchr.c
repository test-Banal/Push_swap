#include "libft.h"

// char	*ft_strchr(char const *string, int c)
// {
// 	if (c == 0)
// 		return ((char *)string + ft_strlen(string));
// 	while (*string != '\0')
// 	{
// 		if (*string == (char)c)
// 		{
// 			return ((char *)string);
// 		}
// 		string++;
// 	}
// 	return (NULL);
// }	
char	*ft_strchr(char const *string, int c)
{
	char	*str;

	str = (char *)string;
	while (*str != (char)c)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return (str);
}
