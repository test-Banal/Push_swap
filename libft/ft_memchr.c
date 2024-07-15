/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneumann <aneumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 19:27:48 by aneumann          #+#    #+#             */
/*   Updated: 2023/11/17 19:27:52 by aneumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
