#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words + 1);
}

static char	*ft_strndup(char *s, size_t len)
{
	size_t	i;
	char	*dst;

	i = 0;
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	while (i < len)
	{
		dst[i] = s[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	**ft_split(char const *s, char c)
{
	char	**strlist;
	size_t	save;
	size_t	k;
	size_t	i;

	k = 0;
	i = 0;
	if (!s)
		return (NULL);
	strlist = ft_calloc((ft_countword(s, c)), sizeof(char *));
	if (!strlist)
		return (NULL);
	while (i < ft_countword(s, c) - 1)
	{
		while (s[k] && s[k] == c)
			k++;
		save = 0;
		while (s[k] && s[k] != c)
		{
			save++;
			k++;
		}
		strlist[i++] = ft_strndup(((char *)s + k - save), save);
	}
	return (strlist);
}
