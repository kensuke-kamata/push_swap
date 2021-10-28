/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 07:29:32 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/28 07:29:51 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	lstsize(t_node *head)
{
	int			size;
	t_node		*n;

	if (!head)
		return (0);
	size = 0;
	n = head->next;
	while (n != head)
	{
		size++;
		n = n->next;
	}
	return (size);
}
