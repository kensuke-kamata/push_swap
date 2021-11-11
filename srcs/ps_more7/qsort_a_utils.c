/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qsort_a_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:57:27 by kkamata           #+#    #+#             */
/*   Updated: 2021/11/11 15:58:33 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ps_qsort_3a_321(t_stack *stack)
{
	sa(stack);
	ra(stack);
	sa(stack);
	rra(stack);
	sa(stack);
}

void	ps_qsort_3a_132(t_stack *stack)
{
	ra(stack);
	sa(stack);
	rra(stack);
}

void	ps_qsort_3a_312(t_stack *stack)
{
	ra(stack);
	sa(stack);
	rra(stack);
	sa(stack);
}

void	ps_qsort_3a_231(t_stack *stack)
{
	sa(stack);
	ra(stack);
	sa(stack);
	rra(stack);
}

void	ps_qsort_3a_213(t_stack *stack)
{
	sa(stack);
}
