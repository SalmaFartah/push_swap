/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructionss_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 10:46:07 by sfartah           #+#    #+#             */
/*   Updated: 2025/02/26 17:16:38 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	rr(t_node **stack1, t_node **stack2)
{
	rot(stack1);
	rot(stack2);
}

void	reverse_rot(t_node **stack)
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
}

void	rrr(t_node **stack1, t_node **stack2)
{
	reverse_rot(stack1);
	reverse_rot(stack2);
}
