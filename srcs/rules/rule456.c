/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule456.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 08:29:57 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/28 11:36:33 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static
void	push_to_a(t_stack *stack)
{
	t_node	*n;

	n = stack->b->next;
	while (n != stack->b)
	{
		n = n->next;
		pa(stack);
	}
}

static
void	push_to_b(t_stack *stack)
{
	t_node	*n;
	int		v;
	int		size;
	int		criteria;

	n = stack->a->next;
	size = lstsize(stack->a);
	criteria = median(stack, stack->a);
	while (size > 3 && n != stack->a)
	{
		v = n->value;
		n = n->next;
		if (v < criteria)
		{
			pb(stack);
			size--;
		}
		else
			ra(stack);
	}
}

void	asc_456(t_stack *stack)
{
	int		size;

	push_to_b(stack);
	asc_3a(stack);
	size = lstsize(stack->b);
	if (size == 2)
		desc_2b(stack);
	if (size == 3)
		desc_3b(stack);
	push_to_a(stack);
}
