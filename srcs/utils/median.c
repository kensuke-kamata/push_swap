/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   median.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 08:07:35 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/29 15:58:35 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	median(t_stack *stack, t_node *head)
{
	t_node	*n;
	int		*arr;
	int		size;
	int		res;
	int		i;

	size = lstsize(head);
	arr = (int *)malloc(sizeof(int) * (size + 1));
	if (!arr)
		ps_exit(stack, FAILURE, "median");
	n = head->next;
	i = 0;
	while (n != head)
	{
		arr[i++] = n->value;
		n = n->next;
	}
	insertion_sort(arr, size);
	res = arr[size / 2];
	free(arr);
	return (res);
}
