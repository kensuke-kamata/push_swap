/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 08:20:31 by kkamata           #+#    #+#             */
/*   Updated: 2021/11/09 21:11:42 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Bottom goes to top
void	rrotate(t_node *head)
{
	t_node	*n1;
	t_node	*n2;

	n1 = head->prev;
	n2 = head->prev->prev;
	if (n1 == head || n2 == head)
		return ;
	head->next->prev = n1;
	n1->next = head->next;
	head->next = n1;
	n1->prev = head;
	head->prev = n2;
	n2->next = head;
}

void	rra(t_stack *stack)
{
	rrotate(stack->a);
	lstadd_back(stack->ans, lstnew(RRA));
}

void	rrb(t_stack *stack)
{
	rrotate(stack->b);
	lstadd_back(stack->ans, lstnew(RRB));
}

void	rrr(t_stack *stack)
{
	rrotate(stack->a);
	rrotate(stack->b);
	lstadd_back(stack->ans, lstnew(RRR));
}
