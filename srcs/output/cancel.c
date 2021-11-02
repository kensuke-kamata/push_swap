/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cancel.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 22:07:25 by kkamata           #+#    #+#             */
/*   Updated: 2021/11/02 22:08:08 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static
int	lstcancel(t_node *n1)
{
	t_node	*n2;
	t_node	*n3;
	t_node	*n4;

	n2 = n1->next;
	n3 = n2->next;
	n4 = n3->next;
	n1->next = n4;
	n4->prev = n1;
	free(n2);
	free(n3);
	return (1);
}

int	cancel(t_node *head, t_node *target)
{
	if (target->next == head && target->next->next == head)
		return (0);
	if (target->next->value == RA && target->next->next->value == RRA)
		return (lstcancel(target));
	if (target->next->value == RRA && target->next->next->value == RA)
		return (lstcancel(target));
	if (target->next->value == RB && target->next->next->value == RRB)
		return (lstcancel(target));
	if (target->next->value == RRB && target->next->next->value == RB)
		return (lstcancel(target));
	return (0);
}
