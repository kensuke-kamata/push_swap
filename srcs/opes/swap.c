/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 08:15:13 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/28 08:15:54 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	swap(t_node *n1, t_node *n2)
{
	int		tmp;

	tmp = n1->value;
	n1->value = n2->value;
	n2->value = tmp;
}

void	sa(t_stack *stack)
{
	t_node	*n1;
	t_node	*n2;

	n1 = stack->a->next;
	n2 = stack->a->next->next;
	swap(n1, n2);
	lstadd_back(stack->ans, lstnew(SA));
}

void	sb(t_stack *stack)
{
	t_node	*n1;
	t_node	*n2;

	n1 = stack->b->next;
	n2 = stack->b->next->next;
	swap(n1, n2);
	lstadd_back(stack->ans, lstnew(SB));
}
