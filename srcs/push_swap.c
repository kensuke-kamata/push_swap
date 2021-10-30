/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 22:20:58 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/30 13:31:41 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// void end(void)__attribute__((destructor));
// void end(void) { system("leaks push_swap"); }

// void	debug(t_stack *stack)
// {
// 	ft_printf("STACK A : ");
// 	lstshow(stack->a);
// 	ft_printf("\n");
// 	ft_printf("STACK B : ");
// 	lstshow(stack->b);
// 	ft_printf("\n");
// }

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
	int			sorted;
	t_stack		*stack;

	size = argc - 1;
	if (size < 1)
		ps_exit(NULL, FAILURE, NULL);
	if (SIZELIMIT < size)
		ps_exit(NULL, FAILURE, ERRMSG);
	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		ps_exit(NULL, FAILURE, ERRMSG);
	ps_init(stack, argc, argv);
	if (is_duplicated(stack->a))
		ps_exit(stack, FAILURE, ERRMSG);
	if (is_sorted(stack->a))
		ps_exit(stack, SUCCESS, NULL);
	sorted = 0;
	if (size < 7)
		sorted = ps_less7(stack, size);
	if (size >= 7)
		sorted = ps_more7(stack, size);
	if (sorted == size)
		answer(stack->ans);
	ps_exit(stack, SUCCESS, NULL);
}
