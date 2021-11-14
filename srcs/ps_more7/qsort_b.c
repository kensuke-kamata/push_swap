/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qsort_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 10:01:10 by kkamata           #+#    #+#             */
/*   Updated: 2021/11/14 20:54:12 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static
int	ps_size_pa(t_stack *stack, int size)
{
	int		i;

	i = -1;
	while (++i < size)
		pa(stack);
	return (size);
}

// In descending order
static
int	ps_qsort_2b(t_stack *stack)
{
	desc_2b(stack);
	return (ps_size_pa(stack, 2));
}

// In descending order
static
int	ps_qsort_3b(t_stack *stack)
{
	t_node	*n1;
	t_node	*n2;
	t_node	*n3;

	n1 = stack->b->next;
	n2 = stack->b->next->next;
	n3 = stack->b->next->next->next;
	if (n2->value < n1->value && n1->value < n3->value)
		qsort_3b_213(stack);
	else if (n3->value < n1->value && n1->value < n2->value)
		qsort_3b_312(stack);
	else if (n1->value < n3->value && n3->value < n2->value)
		qsort_3b_132(stack);
	else if (n2->value < n3->value && n3->value < n1->value)
		qsort_3b_231(stack);
	else if (n1->value < n2->value && n2->value < n3->value)
		qsort_3b_123(stack);
	return (3);
}

static
void	_ps_qsort_b(t_stack *stack, t_pivot *pivot, t_count *count, int size_b)
{
	while (size_b-- > 0)
	{
		if (stack->b->next->value < pivot->small)
			count->rb += rb(stack);
		else
		{
			count->pa += pa(stack);
			if (stack->a->next->value < pivot->large)
				count->ra += ra(stack);
		}
	}
}

int	ps_qsort_b(t_stack *stack, int size_b)
{
	t_pivot	pivot;
	t_count	count;

	if (is_sorted_desc(stack->b, size_b))
		return (ps_size_pa(stack, size_b));
	if (size_b == 2)
		return (ps_qsort_2b(stack));
	if (size_b == 3)
		return (ps_qsort_3b(stack));
	init_count(&count);
	init_pivot(stack, stack->b, &pivot, size_b);
	_ps_qsort_b(stack, &pivot, &count, size_b);
	ps_qsort_a(stack, count.pa - count.ra);
	ps_qsort_reverse(stack, count.ra, count.rb);
	ps_qsort_a(stack, count.ra);
	ps_qsort_b(stack, count.rb);
	return (0);
}
