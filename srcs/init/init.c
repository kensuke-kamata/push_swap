/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 06:30:20 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/28 06:32:31 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_node	*init_list(void)
{
	t_node	*head;

	head = (t_node *)malloc(sizeof(t_node));
	if (!head)
		return (NULL);
	head->prev = head;
	head->next = head;
	return (head);
}

t_stack	*init_stack(void)
{
	t_stack		*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		ps_exit(stack, FAILURE, "init_stack\n");
	stack->a = init_list();
	stack->b = init_list();
	stack->ans = init_list();
	if (!stack->a || !stack->b || !stack->ans)
		ps_exit(stack, FAILURE, "init_stack\n");
	return (stack);
}
