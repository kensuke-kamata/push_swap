/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule456.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 08:29:57 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/30 09:51:36 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static
void	push_to_a(t_stack *stack)
{
	t_node	*n1;
	t_node	*n2;

	n1 = stack->b->next;
	while (n1 != stack->b)
	{
		n1 = n1->next;
		pa(stack);
		n2 = stack->a->next;
		if (n2->value > n2->next->value)
			sa(stack);
	}
}

static
int	push_to_b(t_stack *stack, int size_a)
{
	int		size_b;
	int		criteria;

	size_b = 0;
	criteria = median(stack, stack->a);
	while (size_a > 3)
	{
		if (stack->a->next->value < criteria)
		{
			pb(stack);
			size_a--;
			size_b++;
		}
		else
			ra(stack);
	}
	return (size_b);
}

int	asc_456(t_stack *stack, int size_a)
{
	int		size_b;

	size_b = push_to_b(stack, size_a);
	if (size_b == 2)
		desc_2b(stack);
	if (size_b == 3)
		desc_3b(stack);
	asc_3a(stack);
	push_to_a(stack);
	return (size_a);
}
