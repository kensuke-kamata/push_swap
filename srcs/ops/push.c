/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 08:11:39 by kkamata           #+#    #+#             */
/*   Updated: 2021/11/10 15:33:17 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Push the top node from orig stack to dest stack
// *orig and *dest are sentinels of each stack
void	push(t_node *orig, t_node *dest)
{
	t_node	*n;

	if (!orig || !dest || orig->next == orig)
		return ;
	n = orig->next;
	lstadd_front(dest, lstnew(n->value));
	orig->next->next->prev = orig;
	orig->next = orig->next->next;
	free(n);
}

// Push to stack A
int	pa(t_stack *stack)
{
	push(stack->b, stack->a);
	lstadd_back(stack->ans, lstnew(PA));
	return (1);
}

// Push to stack B
int	pb(t_stack *stack)
{
	push(stack->a, stack->b);
	lstadd_back(stack->ans, lstnew(PB));
	return (1);
}
