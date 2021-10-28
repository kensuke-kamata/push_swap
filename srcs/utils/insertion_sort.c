/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 07:59:32 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/28 08:06:21 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Insert the i-th element into the appropriate place
// Start from the front to the bottom
// Leave the 1st element and handle from 2nd element
void	insertion_sort(int	*arr, int len)
{
	int		i;
	int		j;
	int		tmp;

	i = 1;
	while (i < len)
	{
		tmp = arr[i];
		j = i;
		while (j > 0 && arr[j - 1] > tmp)
		{
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = tmp;
		i++;
	}
}
