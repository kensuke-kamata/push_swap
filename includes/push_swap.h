/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkamata <kkamata@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 21:52:53 by kkamata           #+#    #+#             */
/*   Updated: 2021/10/28 11:36:50 by kkamata          ###   ########.fr       */
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

// +--- arg --- + //
t_bool	valid_argc(int argc);
void	load_argv(t_stack *stack, int argc, char **argv);

// +--- init --- + //
t_node	*init_list(void);
t_stack	*init_stack(void);

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

// +--- rules/rule2 --- + //
void	asc_2a(t_stack *stack);
void	asc_2b(t_stack *stack);
void	desc_2b(t_stack *stack);

// +--- rules/rule3 --- + //
void	asc_3a(t_stack *stack);
void	desc_3b(t_stack *stack);

// +--- rules/rule456 --- + //
void	asc_456(t_stack *stack);

// +--- branch --- + //
void	branch_less7(t_stack *stack, int size);

// +--- output --- + //
void	answer(t_node *head);

// +--- utils --- + //
void	insertion_sort(int	*arr, int len);
int		median(t_stack *stack, t_node *head);
int		ps_atoi(t_stack *stack, char *str);

#endif
