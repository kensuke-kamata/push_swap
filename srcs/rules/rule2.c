/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 08:28:19 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/28 08:34:02 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	asc_2a(t_stack *stack)
{
	int		value1;
	int		value2;

	value1 = stack->a->next->value;
	value2 = stack->a->next->next->value;
	if (value1 > value2)
		sa(stack);
}

void	asc_2b(t_stack *stack)
{
	int		value1;
	int		value2;

	value1 = stack->b->next->value;
	value2 = stack->b->next->next->value;
	if (value1 > value2)
		sb(stack);
}

void	desc_2b(t_stack *stack)
{
	int		value1;
	int		value2;

	value1 = stack->b->next->value;
	value2 = stack->b->next->next->value;
	if (value1 < value2)
		sb(stack);
}
