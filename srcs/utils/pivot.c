/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pivot.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:19:25 by kkamata           #+#    #+#             */
/*   Updated: 2021/11/11 15:33:31 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static
void	set_pivot(t_pivot *pivot, int *arr, int size)
{
	int		div;
	int		mod;

	div = size / 3;
	mod = size % 3;
	pivot->small = arr[div];
	if (mod == 2)
		pivot->large = arr[size - div - 1];
	else
		pivot->large = arr[size - div];
}

void	init_pivot(t_stack *stack, t_node *head, t_pivot *pivot, int size)
{
	int			i;
	int			*arr;
	t_node		*node;

	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		ps_exit(stack, FAILURE, ERRMSG);
	i = 0;
	node = head->next;
	while (i < size)
	{
		arr[i++] = node->value;
		node = node->next;
	}
	insertion_sort(arr, size);
	set_pivot(pivot, arr, size);
	free(arr);
}
