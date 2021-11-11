/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 22:05:47 by kkamata           #+#    #+#             */
/*   Updated: 2021/11/11 11:21:07 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static
int	lstreplace(t_node *n1, t_operation op)
{
	t_node	*n2;
	t_node	*n3;

	n2 = n1->next;
	n3 = n2->next;
	n1->next = n3;
	n3->prev = n1;
	n3->value = op;
	free(n2);
	return (1);
}

int	replace(t_node *head, t_node *target)
{
	if (target->next == head && target->next->next == head)
		return (0);
	if (target->next->value == SA && target->next->next->value == SB)
		return (lstreplace(target, SS));
	if (target->next->value == SB && target->next->next->value == SA)
		return (lstreplace(target, SS));
	if (target->next->value == RA && target->next->next->value == RB)
		return (lstreplace(target, RR));
	if (target->next->value == RB && target->next->next->value == RA)
		return (lstreplace(target, RR));
	if (target->next->value == RRA && target->next->next->value == RRB)
		return (lstreplace(target, RRR));
	if (target->next->value == RRB && target->next->next->value == RRA)
		return (lstreplace(target, RRR));
	return (0);
}
