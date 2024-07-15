/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneumann <aneumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:25:13 by aneumann          #+#    #+#             */
/*   Updated: 2024/07/05 16:39:24 by aneumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
