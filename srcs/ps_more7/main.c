/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 09:59:15 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/30 11:04:39 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static
int	ps_more7_pb(t_stack *stack)
{
	pb(stack);
	return (1);
}

static
int	ps_more7_ra(t_stack *stack)
{
	ra(stack);
	return (1);
}

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
			count_pb += ps_more7_pb(stack);
		else
			count_ra += ps_more7_ra(stack);
	}
	sorted_b = ps_qsort_b(stack, count_pb);
	sorted_a = ps_qsort_a(stack, count_ra);
	return (sorted_a + sorted_b);
}
