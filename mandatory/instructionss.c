/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructionss.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 10:46:07 by sfartah           #+#    #+#             */
/*   Updated: 2025/02/22 11:36:47 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_node **stack1, t_node **stack2)
{
	rot(stack1, 'r');
	rot(stack2, 'r');
	write(1, "rr\n", 3);
}

void	reverse_rot(t_node **stack, char c)
{
	t_node	*help;

	if (!(*stack))
		return ;
	help = *stack;
	*stack = ft_lstlast(*stack);
	(*stack)->next = help;
	while (help)
	{
		if (help->next == *stack)
		{
			help->next = NULL;
			break ;
		}
		help = help->next;
	}
	if (c == 'a')
		write(1, "rra\n", 4);
	else if (c == 'b')
		write(1, "rrb\n", 4);
}

void	rrr(t_node **stack1, t_node **stack2)
{
	reverse_rot(stack1, 'r');
	reverse_rot(stack2, 'r');
	write(1, "rrr\n", 4);
}
