/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 08:29:54 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/29 09:20:41 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Sort three numbers of stack b in descending order
void	desc_3b(t_stack *stack)
{
	t_node	*n1;
	t_node	*n2;
	t_node	*n3;

	n1 = stack->b->next;
	n2 = stack->b->next->next;
	n3 = stack->b->next->next->next;
	// Case1: n2 < n1 < n3
	if (n2->value < n1->value && n1->value < n3->value)
		rb(stack);
	// Case2: n3 < n1 < n2
	if (n3->value < n1->value && n1->value < n2->value)
		sb(stack);
	// Case3: n1 < n3 < n2
	if (n1->value < n3->value && n3->value < n2->value)
		rb(stack);
	// Case4: n2 < n3 < n1
	if (n2->value < n3->value && n3->value < n1->value)
	{
		rrb(stack);
		sb(stack);
	}
	// Case5: n1 < n2 < n3
	if (n1->value < n2->value && n2->value < n3->value)
	{
		sb(stack);
		rrb(stack);
	}
}

void	asc_3b(t_stack *stack)
{
	t_node	*n1;
	t_node	*n2;
	t_node	*n3;

	n1 = stack->b->next;
	n2 = stack->b->next->next;
	n3 = stack->b->next->next->next;
	// Case1: n2 < n1 < n3
	if (n2->value < n1->value && n1->value < n3->value)
		sb(stack);
	// Case2: n2 < n3 < n1
	if (n2->value < n3->value && n3->value < n1->value)
		rb(stack);
	// Case3: n3 < n1 < n2
	if (n3->value < n1->value && n1->value < n2->value)
		rrb(stack);
	// Case4: n1 < n3 < n2 ... sa -> ra
	if (n1->value < n3->value && n3->value < n2->value)
	{
		sb(stack);
		rb(stack);
	}
	// Case5: n3 < n2 < n1 ... sa -> rra
	if (n3->value < n2->value && n2->value < n1->value)
	{
		sb(stack);
		rrb(stack);
	}
}

// Sort three numbers of stack a in ascending order
void	asc_3a(t_stack *stack)
{
	t_node	*n1;
	t_node	*n2;
	t_node	*n3;

	n1 = stack->a->next;
	n2 = stack->a->next->next;
	n3 = stack->a->next->next->next;
	// Case1: n2 < n1 < n3
	if (n2->value < n1->value && n1->value < n3->value)
		sa(stack);
	// Case2: n2 < n3 < n1
	if (n2->value < n3->value && n3->value < n1->value)
		ra(stack);
	// Case3: n3 < n1 < n2
	if (n3->value < n1->value && n1->value < n2->value)
		rra(stack);
	// Case4: n1 < n3 < n2 ... sa -> ra
	if (n1->value < n3->value && n3->value < n2->value)
	{
		sa(stack);
		ra(stack);
	}
	// Case5: n3 < n2 < n1 ... sa -> rra
	if (n3->value < n2->value && n2->value < n1->value)
	{
		sa(stack);
		rra(stack);
	}
}
