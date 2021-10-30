/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 09:59:15 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/30 10:00:04 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ps_more7(t_stack *stack, int size_a)
{
	int		pivot;
	int		count_pb;
	int		count_ra;
	int		sorted_b;
	int		sorted_a;

	count_pb = 0;
	count_ra = 0;
	pivot = median(stack, stack->a);
	while (size_a-- > 0)
	{
		if (stack->a->next->value < pivot)
		{
			pb(stack);
			count_pb++;
		}
		else
		{
			ra(stack);
			count_ra++;
		}
	}
	sorted_b = ps_qsort_b(stack, count_pb);
	sorted_a = ps_qsort_a(stack, count_ra);
	return (sorted_a + sorted_b);
}
