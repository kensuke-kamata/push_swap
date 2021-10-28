/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   branch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:23:37 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/28 11:36:43 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	branch_less7(t_stack *stack, int size)
{
	if (size == 2)
		asc_2a(stack);
	if (size == 3)
		asc_3a(stack);
	if (3 < size && size < 7)
		asc_456(stack);
}
