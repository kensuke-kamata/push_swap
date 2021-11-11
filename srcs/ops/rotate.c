/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 08:17:45 by kkamata           #+#    #+#             */
/*   Updated: 2021/11/10 15:31:54 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Top goes to bottom
void	rotate(t_node *head)
{
	t_node	*n1;
	t_node	*n2;

	n1 = head->next;
	n2 = head->next->next;
	if (n1 == head || n2 == head)
		return ;
	head->prev->next = n1;
	n1->prev = head->prev;
	head->prev = n1;
	n1->next = head;
	head->next = n2;
	n2->prev = head;
}

int	ra(t_stack *stack)
{
	rotate(stack->a);
	lstadd_back(stack->ans, lstnew(RA));
	return (1);
}

int	rb(t_stack *stack)
{
	rotate(stack->b);
	lstadd_back(stack->ans, lstnew(RB));
	return (1);
}
