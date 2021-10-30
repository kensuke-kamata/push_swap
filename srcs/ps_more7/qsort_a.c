/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qsort_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 10:51:48 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/30 10:52:15 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ps_qsort_a(t_stack *stack, int size_a)
{
	int		count_pb;

	if (is_sorted(stack->a))
		return (size_a);
	count_pb = 0;
	while (size_a-- > 0)
	{
		pb(stack);
		count_pb++;
	}
	return (ps_qsort_b(stack, count_pb));
}
