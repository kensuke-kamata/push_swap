/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 07:37:07 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/29 04:51:29 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	valid_argc(int size)
{
	if (size < 1)
		ps_exit(NULL, FAILURE, NULL);
	if (ARGCLIMIT < size)
		ps_exit(NULL, FAILURE, ERRMSG);
}

void	load_argv(t_stack *stack, int argc, char **argv)
{
	int		i;
	int		value;

	i = 1;
	while (i < argc)
	{
		value = ps_atoi(stack, argv[i]);
		lstadd_back(stack->a, lstnew(value));
		i++;
	}
}
