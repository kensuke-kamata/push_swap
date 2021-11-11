/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qsort_b_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:02:21 by kkamata           #+#    #+#             */
/*   Updated: 2021/11/11 16:16:58 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	qsort_3b_123(t_stack *stack)
{
	rb(stack);
	sb(stack);
	pa(stack);
	pa(stack);
	rrb(stack);
	pa(stack);
}

void	qsort_3b_231(t_stack *stack)
{
	pa(stack);
	sb(stack);
	pa(stack);
	pa(stack);
}

void	qsort_3b_132(t_stack *stack)
{
	sb(stack);
	pa(stack);
	sb(stack);
	pa(stack);
	pa(stack);
}

void	qsort_3b_312(t_stack *stack)
{
	sb(stack);
	pa(stack);
	pa(stack);
	pa(stack);
}

void	qsort_3b_213(t_stack *stack)
{
	rb(stack);
	sb(stack);
	pa(stack);
	rrb(stack);
	pa(stack);
	pa(stack);
}
