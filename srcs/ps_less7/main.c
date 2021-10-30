/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 10:02:12 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/30 10:37:51 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ps_less7(t_stack *stack, int size_a)
{
	if (size_a == 2)
		return (asc_2a(stack));
	if (size_a == 3)
		return (asc_3a(stack));
	if (3 < size_a && size_a < 7)
		return (asc_456(stack, size_a));
	return (0);
}
