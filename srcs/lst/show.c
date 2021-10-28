/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 07:42:29 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/28 07:44:44 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	lstshow(t_node *head)
{
	t_node	*n;

	n = head->next;
	while (n != head)
	{
		ft_printf("%d ", n->value);
		n = n->next;
	}
	ft_printf("\n");
}
