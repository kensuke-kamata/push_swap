/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 21:52:53 by kkamata           #+#    #+#             */
/*   Updated: 2021/11/02 22:18:52 by kkamata          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// +------------------------------------------+ //
//   Libft                                      //
// +------------------------------------------+ //

# include "../libft/includes/libft.h"
# include "../libft/includes/ft_printf.h"

// +------------------------------------------+ //
//   Includes                                   //
// +------------------------------------------+ //

# include "define.h"

// +------------------------------------------+ //
//   Prototypes                                 //
// +------------------------------------------+ //

// +--- push_swap --- + //
void	ps_exit(t_stack *stack, t_exit status, char *msg);

// +--- init --- + //
void	ps_init(t_stack *stack, int argc, char **argv);

// +--- valid --- + //
t_bool	is_duplicated(t_node *head);
t_bool	is_sorted(t_node *head);

// +--- lst --- + //
t_node	*lstnew(int value);
void	lstadd_back(t_node *sentinel, t_node *new);
void	lstadd_front(t_node *sentinel, t_node *new);
void	lstclear(t_node *head);
void	lstshow(t_node *head);
int		lstsize(t_node *head);

// +--- ops/push --- + //
void	push(t_node *orig, t_node *dest);
void	pa(t_stack *stack);
void	pb(t_stack *stack);

// +--- ops/swap --- + //
void	swap(t_node *n1, t_node *n2);
void	sa(t_stack *stack);
void	sb(t_stack *stack);

// +--- ops/rotate --- + //
void	rotate(t_node *head);
void	ra(t_stack *stack);
void	rb(t_stack *stack);

// +--- ops/rrotate --- + //
void	rrotate(t_node *head);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);

// +--- ps_less7/main --- + //
int		ps_less7(t_stack *stack, int size_a);

// +--- ps_less7/rule2 --- + //
int		asc_2a(t_stack *stack);
int		asc_2b(t_stack *stack);
int		desc_2b(t_stack *stack);

// +--- ps_less7/rule3 --- + //
int		asc_3a(t_stack *stack);
int		asc_3b(t_stack *stack);
int		desc_3b(t_stack *stack);

// +--- ps_less7/rule456 --- + //
int		asc_456(t_stack *stack, int size_a);

// +--- ps_more7/main --- + //
int		ps_more7(t_stack *stack, int size_a);

// +--- ps_more7/qsort --- + //
int		ps_qsort_a(t_stack *stack, int size_a);
int		ps_qsort_b(t_stack *stack, int size_b);

// +--- output --- + //
void	answer(t_node *head);
int		replace(t_node *head, t_node *target);
int		cancel(t_node *head, t_node *target);

// +--- utils --- + //
void	insertion_sort(int	*arr, int len);
int		median(t_stack *stack, t_node *head);
int		ps_atoi(t_stack *stack, char *str);

#endif
