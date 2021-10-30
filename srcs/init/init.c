/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 06:30:20 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/30 09:33:20 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static
t_node	*init_lst(void)
{
	t_node	*head;

	head = (t_node *)malloc(sizeof(t_node));
	if (!head)
		return (NULL);
	head->prev = head;
	head->next = head;
	return (head);
}

void	ps_init(t_stack *stack, int argc, char **argv)
{
	int		i;
	int		value;

	stack->a = init_lst();
	stack->b = init_lst();
	stack->ans = init_lst();
	if (!stack->a || !stack->b || !stack->ans)
		ps_exit(stack, FAILURE, ERRMSG);
	i = 1;
	while (i < argc)
	{
		value = ps_atoi(stack, argv[i]);
		lstadd_back(stack->a, lstnew(value));
		i++;
	}
}
