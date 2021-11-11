/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 12:03:11 by kkamata           #+#    #+#             */
/*   Updated: 2021/11/11 13:06:19 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// void end(void)__attribute__((destructor));
// void end(void) { system("leaks push_swap"); }

void	debug(t_stack *stack)
{
	ft_printf("\n");
	ft_printf("STACK A : ");
	lstshow(stack->a);
	ft_printf("\n");
	ft_printf("STACK B : ");
	lstshow(stack->b);
	ft_printf("\n");
}

void	debug_array(int *arr, int size)
{
	int	i;

	i = 0;
	ft_printf("ARRAY [ ");
	while (i < size)
		ft_printf("%d ", arr[i++]);
	ft_printf("]\n");
}

void	debug_pivot(t_pivot pivot)
{
	ft_printf("PIVOT SMALL [%d]\n", pivot.small);
	ft_printf("PIVOT LARGE [%d]\n", pivot.large);
}
