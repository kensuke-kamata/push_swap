/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 08:29:54 by kkamata           #+#    #+#             */
/*   Updated: 2021/11/11 14:59:30 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	desc_3b(t_stack *stack)
{
	t_node	*n1;
	t_node	*n2;
	t_node	*n3;

	n1 = stack->b->next;
	n2 = stack->b->next->next;
	n3 = stack->b->next->next->next;
	if (n2->value < n1->value && n1->value < n3->value)
		rrb(stack);
	else if (n3->value < n1->value && n1->value < n2->value)
		sb(stack);
	else if (n1->value < n3->value && n3->value < n2->value)
		rb(stack);
	else if (n2->value < n3->value && n3->value < n1->value)
	{
		rrb(stack);
		sb(stack);
	}
	else if (n1->value < n2->value && n2->value < n3->value)
	{
		sb(stack);
		rrb(stack);
	}
	return (3);
}

int	asc_3b(t_stack *stack)
{
	t_node	*n1;
	t_node	*n2;
	t_node	*n3;

	n1 = stack->b->next;
	n2 = stack->b->next->next;
	n3 = stack->b->next->next->next;
	if (n2->value < n1->value && n1->value < n3->value)
		sb(stack);
	else if (n2->value < n3->value && n3->value < n1->value)
		rb(stack);
	else if (n3->value < n1->value && n1->value < n2->value)
		rrb(stack);
	else if (n1->value < n3->value && n3->value < n2->value)
	{
		sb(stack);
		rb(stack);
	}
	else if (n3->value < n2->value && n2->value < n1->value)
	{
		sb(stack);
		rrb(stack);
	}
	return (3);
}

int	asc_3a(t_stack *stack)
{
	t_node	*n1;
	t_node	*n2;
	t_node	*n3;

	n1 = stack->a->next;
	n2 = stack->a->next->next;
	n3 = stack->a->next->next->next;
	if (n2->value < n1->value && n1->value < n3->value)
		sa(stack);
	else if (n2->value < n3->value && n3->value < n1->value)
		ra(stack);
	else if (n3->value < n1->value && n1->value < n2->value)
		rra(stack);
	else if (n1->value < n3->value && n3->value < n2->value)
	{
		sa(stack);
		ra(stack);
	}
	else if (n3->value < n2->value && n2->value < n1->value)
	{
		sa(stack);
		rra(stack);
	}
	return (3);
}
