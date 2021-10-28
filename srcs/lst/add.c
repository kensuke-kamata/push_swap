/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 06:56:08 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/28 07:01:41 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Add a new node to the back of the stack (list)
// Before : ... -[tail]-[sentinel]- ...
// After  : ... -[tail]-[new]-[sentinel]- ...
void	lstadd_back(t_node *sentinel, t_node *new)
{
	if (!sentinel || !new)
		return ;
	new->prev = sentinel->prev;
	sentinel->prev->next = new;
	new->next = sentinel;
	sentinel->prev = new;
}

// Add a new node to the front of the stack (list)
// Before : ... -[sentinel]-[head]- ...
// After  : ... -[sentinel]-[new]-[head]- ...
void	lstadd_front(t_node *sentinel, t_node *new)
{
	if (!sentinel || !new)
		return ;
	new->next = sentinel->next;
	sentinel->next->prev = new;
	new->prev = sentinel;
	sentinel->next = new;
}
