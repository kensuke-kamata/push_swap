/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 21:52:53 by kkamata           #+#    #+#             */
/*   Updated: 2021/11/11 16:18:27 by kkamata          ###   ########.fr       */
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
void	init_count(t_count *count);

// +--- valid --- + //
t_bool	is_duplicated(t_node *head);
t_bool	is_sorted_asc(t_node *head, int size);
t_bool	is_sorted_desc(t_node *head, int size);

// +--- lst --- + //
t_node	*lstnew(int value);
void	lstadd_back(t_node *sentinel, t_node *new);
void	lstadd_front(t_node *sentinel, t_node *new);
void	lstclear(t_node *head);
void	lstshow(t_node *head);
int		lstsize(t_node *head);

// +--- ops/push --- + //
void	push(t_node *orig, t_node *dest);
int		pa(t_stack *stack);
int		pb(t_stack *stack);

// +--- ops/swap --- + //
void	swap(t_node *n1, t_node *n2);
void	sa(t_stack *stack);
void	sb(t_stack *stack);

// +--- ops/rotate --- + //
void	rotate(t_node *head);
int		ra(t_stack *stack);
int		rb(t_stack *stack);

// +--- ops/rrotate --- + //
void	rrotate(t_node *head);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);

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

// +--- ps_more7 --- + //
void	ps_more7(t_stack *stack, int size_a);
int		ps_qsort_a(t_stack *stack, int size_a);
int		ps_qsort_b(t_stack *stack, int size_b);

// +--- ps_more7/q_sort_a_utils --- + //
void	ps_qsort_3a_132(t_stack *stack);
void	ps_qsort_3a_213(t_stack *stack);
void	ps_qsort_3a_231(t_stack *stack);
void	ps_qsort_3a_312(t_stack *stack);
void	ps_qsort_3a_321(t_stack *stack);

// +--- ps_more7/q_sort_b_utils --- + //
void	qsort_3b_123(t_stack *stack);
void	qsort_3b_132(t_stack *stack);
void	qsort_3b_213(t_stack *stack);
void	qsort_3b_231(t_stack *stack);
void	qsort_3b_312(t_stack *stack);

// +--- ps_more7/ops --- + //
void	ps_qsort_reverse(t_stack *stack, int count_ra, int count_rb);

// +--- ps_more7/utils --- + //
void	init_pivot(t_stack *stack, t_node *head, t_pivot *pivot, int size);

// +--- output --- + //
void	answer(t_node *head);
int		replace(t_node *head, t_node *target);
int		cancel(t_node *head, t_node *target);

// +--- utils --- + //
void	insertion_sort(int	*arr, int len);
int		median(t_stack *stack, t_node *head);
int		ps_atoi(t_stack *stack, char *str);
void	debug(t_stack *stack);
void	debug_pivot(t_pivot pivot);
void	debug_array(int *arr, int size);

#endif
