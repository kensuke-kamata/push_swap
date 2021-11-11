/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qsort_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 10:51:48 by kkamata           #+#    #+#             */
/*   Updated: 2021/11/11 15:58:21 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// In ascending order
static
int	ps_qsort_2a(t_stack *stack)
{
	return (asc_2a(stack));
}

// In ascending order
static
int	ps_qsort_3a(t_stack *stack)
{
	t_node	*n1;
	t_node	*n2;
	t_node	*n3;

	n1 = stack->a->next;
	n2 = stack->a->next->next;
	n3 = stack->a->next->next->next;
	if (n2->value < n1->value && n1->value < n3->value)
		ps_qsort_3a_213(stack);
	else if (n2->value < n3->value && n3->value < n1->value)
		ps_qsort_3a_231(stack);
	else if (n3->value < n1->value && n1->value < n2->value)
		ps_qsort_3a_312(stack);
	else if (n1->value < n3->value && n3->value < n2->value)
		ps_qsort_3a_132(stack);
	else if (n3->value < n2->value && n2->value < n1->value)
		ps_qsort_3a_321(stack);
	return (3);
}

int	ps_qsort_a(t_stack *stack, int size_a)
{
	t_pivot	pivot;
	t_count	count;

	if (is_sorted_asc(stack->a, size_a))
		return (size_a);
	if (size_a == 2)
		return (ps_qsort_2a(stack));
	if (size_a == 3)
		return (ps_qsort_3a(stack));
	init_count(&count);
	init_pivot(stack, stack->a, &pivot, size_a);
	while (size_a-- > 0)
	{
		if (stack->a->next->value >= pivot.large)
			count.ra += ra(stack);
		else
		{
			count.pb += pb(stack);
			if (stack->b->next->value >= pivot.small)
				count.rb += rb(stack);
		}
	}
	ps_qsort_reverse(stack, count.ra, count.rb);
	ps_qsort_a(stack, count.ra);
	ps_qsort_b(stack, count.rb);
	ps_qsort_b(stack, count.pb - count.rb);
	return (0);
}
