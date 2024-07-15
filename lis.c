/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lis.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneumann <aneumann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 07:15:04 by aneumann          #+#    #+#             */
/*   Updated: 2024/07/12 11:23:11 by aneumann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

static void	initialize_arr_and_compute(int *dst, int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
		arr[i++] = 1;
	j = 1;
	while (j < size)
	{
		i = 0;
		while (i < j)
		{
			if (dst[j] > dst[i] && arr[j] <= arr[i])
				arr[j] = arr[i] + 1;
			i++;
		}
		j++;
	}
}

static void	find_max_in_arr(int *arr, int size, int *max)
{
	int	i;

	i = 0;
	*max = 0;
	while (i < size)
	{
		if (arr[i] > *max)
			*max = arr[i];
		i++;
	}	
}

int	*ft_define_lis(int *dst, int size, int *max)
{
	int	*arr;
	int	*lis;

	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		exit(1);
	initialize_arr_and_compute(dst, arr, size);
	find_max_in_arr(arr, size, max);
	lis = ft_lis_util(dst, arr, size, *max);
	return (free(arr), lis);
}

int	*ft_lis_util(int *dst, int *arr, int size, int max)
{
	int	*lis;
	int	i;
	int	j;

	lis = (int *)malloc(sizeof(int) * max);
	if (!lis)
		exit(1);
	i = size - 1;
	j = max;
	while (i >= 0)
	{
		if (j == 0)
			break ;
		if (arr[i] == j)
		{
			lis[j - 1] = dst[i];
			j--;
		}
		i--;
	}	
	return (lis);
}
// if (!arr) {
// 	fprintf(stderr, "Erreur d'allocation de mémoire\n");
// 	exit(EXIT_FAILURE);
// }

// if (!lis) {
//         fprintf(stderr, "Erreur d'allocation de mémoire\n");
//         exit(EXIT_FAILURE);
//     }
