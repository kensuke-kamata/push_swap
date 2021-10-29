/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   branch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 11:23:37 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/29 17:08:46 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	branch_less7(t_stack *stack, int size_a)
{
	if (size_a == 2)
		asc_2a(stack);
	if (size_a == 3)
		asc_3a(stack);
	if (3 < size_a && size_a < 7)
		asc_456(stack, size_a);
}

void	ps_qsort_b(t_stack *stack, int size_b)
{
	lstshow(stack->b);
	ft_printf("size_b: %d\n", size_b);
	int		pivot;
	int		count_pa;
	int		count_rb;

	if (is_sorted(stack->b))
		return ;
	if (size_b <= 2)
	{
		asc_2b(stack);
		return ;
	}
	if (size_b == 3)
	{
		asc_3b(stack);
		return ;
	}
	count_pa = 0;
	count_rb = 0;
	pivot = median(stack, stack->b);
	while (size_b > 0)
	{
		if (stack->b->next->value >= pivot)
		{
			pa(stack);
			count_pa++;
		}
		else
		{
			rb(stack);
			count_rb++;
		}
		size_b--;
	}
	ps_qsort_b(stack, count_rb);
}

void	branch_more7(t_stack *stack, int size_a)
{
	// int		v;
	// int		size;
	int		pivot;
	int		count_pb;
	int		count_ra;
	// t_node	*n;

	count_pb = 0;
	count_ra = 0;
	pivot = median(stack, stack->a);
	while (size_a > 0)
	{
		if (stack->a->next->value < pivot)
		{
			pb(stack);
			count_pb++;
		}
		else
		{
			ra(stack);
			count_ra++;
		}
		size_a--;
	}
	ps_qsort_b(stack, count_pb);
	// ft_printf("stack b\n");
	// lstshow(stack->b);
	// n = stack->b->next;
	// size = lstsize(stack->b);
	// if (size % 2 == 0)
	// 	size--;
	// pivot = median(stack, stack->b);
	// ft_printf("b_size : %d\n", size);
	// ft_printf("b_pivot: %d\n", pivot);
	// while (size > 3 && n != stack->b)
	// {
	// 	v = n->value;
	// 	n = n->next;
	// 	if (v > pivot)
	// 	{
	// 		ft_printf("%d\n", v);
	// 		pa(stack);
	// 		size--;
	// 	}
	// 	else
	// 		rb(stack);
	// }
	// ft_printf("here\n");
	// // ft_printf("size : %d\n", size);
	// // ft_printf("pivot: %d\n", pivot);
	// // while (size > 3 && n != stack->b)
	// // {
	// // 	v = n->value;
	// // 	n = n->next;
	// // 	if (v > pivot)
	// // 	{
	// // 		pa(stack);
	// // 		size--;
	// // 	}
	// // 	else
	// // 		rb(stack);
	// // }
	// // // if (size <= 2)
	// // // 	asc_2b(stack);
	// // if (size == 3)
	// // asc_3b(stack);
	// while (size > 0)
	// {
	// 	pa(stack);
	// 	ra(stack);
	// 	size--;
	// }

}
