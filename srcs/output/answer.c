/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   answer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:14:59 by kkamata           #+#    #+#             */
/*   Updated: 2021/11/02 22:17:37 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static
void	reducer(t_node *head)
{
	t_node	*n;
	int		count;

	count = 0;
	n = head->next;
	while (n != head)
	{
		count += replace(head, n);
		count += cancel(head, n);
		n = n->next;
	}
	if (count)
		reducer(head);
}

static
void	_answer(int value)
{
	if (value == PA)
		ft_putendl_fd("pa", 1);
	if (value == PB)
		ft_putendl_fd("pb", 1);
	if (value == SA)
		ft_putendl_fd("sa", 1);
	if (value == SB)
		ft_putendl_fd("sb", 1);
	if (value == SS)
		ft_putendl_fd("ss", 1);
	if (value == RA)
		ft_putendl_fd("ra", 1);
	if (value == RB)
		ft_putendl_fd("rb", 1);
	if (value == RR)
		ft_putendl_fd("rr", 1);
	if (value == RRA)
		ft_putendl_fd("rra", 1);
	if (value == RRB)
		ft_putendl_fd("rrb", 1);
	if (value == RRR)
		ft_putendl_fd("rrr", 1);
}

void	answer(t_node *head)
{
	t_node	*n;

	reducer(head);
	n = head->next;
	while (n != head)
	{
		_answer(n->value);
		n = n->next;
	}
}
