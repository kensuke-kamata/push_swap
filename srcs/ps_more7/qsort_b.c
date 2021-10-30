/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qsort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 10:01:10 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/30 10:53:18 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static
int	ps_qsort_pa(t_stack *stack)
{
	pa(stack);
	return (1);
}

static
int	ps_qsort_rb(t_stack *stack)
{
	rb(stack);
	return (1);
}

static
void	ps_back_rotate(t_stack *stack, int size_b)
{
	while (size_b-- > 0)
	{
		pa(stack);
		ra(stack);
	}
}

static
int	ps_finsort_b(t_stack *stack, int size_b)
{
	if (is_sorted(stack->b))
	{
		ps_back_rotate(stack, size_b);
		return (size_b);
	}
	if (size_b <= 2)
	{
		asc_2b(stack);
		ps_back_rotate(stack, size_b);
		return (size_b);
	}
	if (size_b == 3)
	{
		asc_3b(stack);
		ps_back_rotate(stack, size_b);
		return (size_b);
	}
	return (0);
}

int	ps_qsort_b(t_stack *stack, int size_b)
{
	int		pivot;
	int		count_pa;
	int		count_rb;
	int		sorted;

	sorted = ps_finsort_b(stack, size_b);
	if (sorted)
		return (sorted);
	count_pa = 0;
	count_rb = 0;
	pivot = median(stack, stack->b);
	while (size_b-- > 0)
	{
		if (stack->b->next->value >= pivot)
			count_pa += ps_qsort_pa(stack);
		else
			count_rb += ps_qsort_rb(stack);
	}
	sorted += ps_qsort_b(stack, count_rb);
	sorted += ps_qsort_a(stack, count_pa);
	return (sorted);
}
