/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 07:37:07 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/28 07:57:47 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_bool	valid_argc(int argc)
{
	if (argc < 1 || ARGCLIMIT < argc)
		return (FALSE);
	return (TRUE);
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
