#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}

static int	ft_str_to_trim(char c, char const *s_to_trim)
{
	return (ft_strchr(s_to_trim, c) != NULL);
}

char	*ft_strtrim(char const *s, char const *set)
{
	size_t		len;
	size_t		start;
	size_t		end;
	char		*trim_s;

	if (s == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s);
	start = 0;
	end = len;
	while (start < len && ft_str_to_trim(s[start], set))
		start++;
	while (end > start && ft_str_to_trim(s[end - 1], set))
		end--;
	trim_s = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!(trim_s))
		return (NULL);
	ft_strcpy(trim_s, s + start, end - start);
	trim_s[end - start] = '\0';
	return (trim_s);
}
