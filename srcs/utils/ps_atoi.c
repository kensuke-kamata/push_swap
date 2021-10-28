/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 07:38:59 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/28 09:06:44 by kkamata          ###   ########.fr       */
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
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	res = 0;
	while (1)
	{
		if (!ft_isdigit(*str))
			ps_exit(stack, FAILURE, ERRMSG);
		if (res > (INT_MAX - (*str - '0')) / 10)
		{
			if (sign == 1 || (sign == -1 && (*str - '0') > 8))
				ps_exit(stack, FAILURE, ERRMSG);
		}
		res = (res * 10) + (*str++ - '0');
		while (ft_isspace(*str))
			str++;
		if (*str == '\0')
			break ;
	}
	return ((int)res * sign);
}
