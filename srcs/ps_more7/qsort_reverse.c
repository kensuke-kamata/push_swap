/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qsort_reverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:30:52 by kkamata           #+#    #+#             */
/*   Updated: 2021/11/11 16:40:06 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ps_qsort_reverse(t_stack *stack, int count_ra, int count_rb)
{
	int		sub;

	sub = count_ra - count_rb;
	if (sub > 0)
	{
		while (count_rb--)
			rrr(stack);
		while (sub--)
			rra(stack);
	}
	else if (sub < 0)
	{
		while (count_ra--)
			rrr(stack);
		while (sub++)
			rrb(stack);
	}
	else
		while (count_ra--)
			rrr(stack);
}
