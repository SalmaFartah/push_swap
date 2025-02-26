/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:36:05 by sfartah           #+#    #+#             */
/*   Updated: 2025/02/15 10:59:04 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_node *stack, char c)
{
	long	swap;

	swap = stack->content;
	stack->content = stack->next->content;
	stack->next->content = swap;
	if (c == 'a')
		write(1, "sa\n", 3);
	else if (c == 'b')
		write(1, "sb\n", 3);
}

void	ss(t_node *stack_a, t_node *stack_b)
{
	swap(stack_a, 's');
	swap(stack_b, 's');
	write(1, "ss\n", 3);
}

void	push(t_node **stack1, t_node **stack2, char c)
{
	t_node	*help;

	if (!*stack1)
		return ;
	help = *stack1;
	*stack1 = (*stack1)->next;
	help->next = NULL;
	ft_lstadd_front(stack2, help);
	if (c == 'a')
		write(1, "pa\n", 3);
	else if (c == 'b')
		write(1, "pb\n", 3);
}

void	rot(t_node **stack, char c)
{
	t_node	*help;

	if (!*stack)
		return ;
	help = *stack;
	ft_lstadd_back(stack, help);
	*stack = (*stack)->next;
	help->next = NULL;
	if (c == 'a')
		write(1, "ra\n", 3);
	else if (c == 'b')
		write(1, "rb\n", 3);
}
