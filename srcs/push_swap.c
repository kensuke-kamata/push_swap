/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 22:20:58 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/28 11:50:01 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

// void end(void)__attribute__((destructor)); void end(void) { system("leaks push_swap"); }

void	ps_exit(t_stack *stack, t_exit status, char *msg)
{
	if (msg)
		ft_putendl_fd(msg, 2);
	if (!stack)
		exit(status);
	if (stack->a)
		lstclear(stack->a);
	if (stack->b)
		lstclear(stack->b);
	if (stack->ans)
		lstclear(stack->ans);
	free(stack);
	exit(status);
}

int	main(int argc, char **argv)
{
	int			size;
	t_stack		*stack;

	size = argc - 1;
	if (!valid_argc(size))
		ps_exit(NULL, FAILURE, ERRMSG);
	stack = init_stack();
	load_argv(stack, argc, argv);
	if (is_duplicated(stack->a))
		ps_exit(stack, FAILURE, ERRMSG);
	if (is_sorted(stack->a))
		ps_exit(stack, SUCCESS, NULL);
	if (size < 7)
		branch_less7(stack, size);
	if (size >= 7)
		printf("over7\n");
	// printf("stack B:\n");
	// lstshow(stack->b);
	answer(stack->ans);
	printf("stack A:\n");
	lstshow(stack->a);
	ps_exit(stack, SUCCESS, NULL);
}
