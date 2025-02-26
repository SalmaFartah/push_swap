/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:36:20 by sfartah           #+#    #+#             */
/*   Updated: 2025/02/20 11:19:11 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	max_position(t_node *stack)
{
	int		i;
	int		ps;
	long	holder;
	t_node	*help;

	i = 0;
	ps = 0;
	help = stack;
	holder = stack->content;
	while (help)
	{
		if (help->content > holder)
		{
			ps = i;
			holder = help->content;
		}
		help = help->next;
		i++;
	}
	return (ps);
}

int	min_position(t_node *stack)
{
	int		i;
	int		ps;
	long	holder;
	t_node	*help;

	i = 0;
	ps = 0;
	help = stack;
	holder = stack->content;
	while (help)
	{
		if (help->content < holder)
		{
			ps = i;
			holder = help->content;
		}
		help = help->next;
		i++;
	}
	return (ps);
}

void	sort_three(t_node **stack)
{
	int	i;

	i = max_position(*stack);
	if (ft_lstsize(*stack) == 3)
	{
		if (i == 0)
			rot(stack, 'a');
		else if (i == 1)
			reverse_rot(stack, 'a');
	}
	if ((*stack)->content > (*stack)->next->content)
		swap(*stack, 'a');
}

void	sort_four(t_node **stack, t_node **helper)
{
	int	i;

	i = min_position(*stack);
	if (i == 1)
		rot(stack, 'a');
	else if (i == 2)
	{
		rot(stack, 'a');
		rot(stack, 'a');
	}
	else if (i == 3)
		reverse_rot(stack, 'a');
	push(stack, helper, 'b');
	sort_three(stack);
	push(helper, stack, 'a');
}

int	sorted(t_node *stack)
{
	while (stack)
	{
		if (stack->next && stack->content > stack->next->content)
			return (0);
		stack = stack->next;
	}
	return (1);
}
