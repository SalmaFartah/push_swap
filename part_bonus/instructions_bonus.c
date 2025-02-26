/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 10:36:05 by sfartah           #+#    #+#             */
/*   Updated: 2025/02/26 17:16:37 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	swap(t_node *stack)
{
	long	swap;

	if (ft_lstsize(stack) > 1)
	{
		swap = stack->content;
		stack->content = stack->next->content;
		stack->next->content = swap;
	}
}

void	ss(t_node *stack_a, t_node *stack_b)
{
	swap(stack_a);
	swap(stack_b);
}

void	push(t_node **stack1, t_node **stack2)
{
	t_node	*help;

	if (!*stack1)
		return ;
	help = *stack1;
	*stack1 = (*stack1)->next;
	help->next = NULL;
	ft_lstadd_front(stack2, help);
}
// void	push(t_node **stack1, t_node **stack2)
// {
// 	t_node	*help;

// 	if (!*stack1)
// 		return ;
// 	help = *stack1;
// 	*stack1 = (*stack1)->next;
// 	help->next = (*stack2);
// 	(*stack2) = help;
// }

void	rot(t_node **stack)
{
	t_node	*help;

	if (!*stack)
		return ;
	help = *stack;
	ft_lstadd_back(stack, help);
	*stack = (*stack)->next;
	help->next = NULL;
}
