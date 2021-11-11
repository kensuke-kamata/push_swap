/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 06:35:03 by kkamata           #+#    #+#             */
/*   Updated: 2021/11/11 14:20:11 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_bool	is_duplicated(t_node *head)
{
	t_node	*i;
	t_node	*j;

	i = head->next;
	while (i != head)
	{
		j = i->next;
		while (j != head)
		{
			if (i->value == j->value)
				return (TRUE);
			j = j->next;
		}
		i = i->next;
	}
	return (FALSE);
}

t_bool	is_sorted_asc(t_node *head, int size)
{
	t_node	*n;

	if (size < 0)
		return (FALSE);
	if (size < 2)
		return (TRUE);
	n = head->next->next;
	while (--size && n != head)
	{
		if (n->prev->value > n->value)
			return (FALSE);
		n = n->next;
	}
	return (TRUE);
}

t_bool	is_sorted_desc(t_node *head, int size)
{
	t_node	*n;

	if (size < 0)
		return (FALSE);
	if (size < 2)
		return (TRUE);
	n = head->next->next;
	while (--size && n != head)
	{
		if (n->prev->value < n->value)
			return (FALSE);
		n = n->next;
	}
	return (TRUE);
}
