/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_more7.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 09:59:15 by kkamata           #+#    #+#             */
/*   Updated: 2021/11/14 21:13:00 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	init_count(t_count *count)
{
	count->pa = 0;
	count->pb = 0;
	count->ra = 0;
	count->rb = 0;
}

int	ps_more7(t_stack *stack, int size_a)
{
	t_pivot	pivot;
	t_count	count;
	int		sorted;

	init_count(&count);
	init_pivot(stack, stack->a, &pivot, size_a);
	while (size_a-- > 0)
	{
		if (stack->a->next->value >= pivot.large)
			count.ra += ra(stack);
		else
		{
			count.pb += pb(stack);
			if (stack->b->next->value < pivot.small)
				count.rb += rb(stack);
		}
	}
	sorted = 0;
	sorted += ps_qsort_a(stack, count.ra);
	sorted += ps_qsort_b(stack, count.pb - count.rb);
	sorted += ps_qsort_b(stack, count.rb);
	return (sorted);
}
