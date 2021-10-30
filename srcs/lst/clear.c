/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 07:04:26 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/30 12:38:49 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	lstclear(t_node *head)
{
	t_node	*n;

	n = head->next;
	while (n != head)
	{
		n = n->next;
		free(n->prev);
	}
	free(head);
}
