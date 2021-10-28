/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 06:35:03 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/28 06:35:53 by kkamata          ###   ########.fr       */
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

t_bool	is_sorted(t_node *head)
{
	t_node	*n;

	n = head->next->next;
	while (n != head)
	{
		if (n->prev->value > n->value)
			return (FALSE);
		n = n->next;
	}
	return (TRUE);
}
