/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 07:38:59 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/30 12:22:44 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ps_atoi(t_stack *stack, char *str)
{
	int64_t	res;
	int8_t	sign;

	while (ft_isspace(*str))
		str++;
	sign = 1;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	res = 0;
	while (1)
	{
		if (!ft_isdigit(*str))
			ps_exit(stack, FAILURE, ERRMSG);
		res = (res * 10) + (*str++ - '0');
		if ((sign == 1 && INT_MAX < res) || (sign == -1 && INT_MAX < res - 1))
			ps_exit(stack, FAILURE, ERRMSG);
		while (ft_isspace(*str))
			str++;
		if (*str == '\0')
			break ;
	}
	return ((int)res * sign);
}
