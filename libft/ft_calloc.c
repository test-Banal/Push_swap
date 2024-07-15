/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneumann <aneumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:55:28 by aneumann          #+#    #+#             */
/*   Updated: 2024/01/30 12:05:21 by aneumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
