/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_mv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:37:49 by sfartah           #+#    #+#             */
/*   Updated: 2025/02/22 13:04:09 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	to_top(int position, t_node *stack)
{
	int	half;
	int	cnt;

	cnt = 0;
	half = ft_lstsize(stack) / 2;
	if (position <= half)
		cnt = position;
	else
		cnt = ft_lstsize(stack) - position;
	return (cnt);
}

int	totmvs(int ps, int tgps, t_node *stack_a, t_node *stack_b)
{
	int	halfa;
	int	halfb;
	int	holder;

	halfa = ft_lstsize(stack_a) / 2;
	halfb = ft_lstsize(stack_b) / 2;
	if ((ps <= halfa && tgps <= halfb) || \
	(ps > halfa && tgps > halfb))
	{
		if (to_top(ps, stack_a) > to_top(tgps, stack_b))
			holder = to_top(ps, stack_a);
		else
			holder = to_top(tgps, stack_b);
	}
	else
		holder = to_top(ps, stack_a) + to_top(tgps, stack_b);
	return (holder);
}

t_my_target	best_move(t_node *stack, t_node *help, \
int (*target)(t_node *, t_node *))
{
	int			moves;
	int			i;
	t_my_target	ps;
	int			n;
	t_node		*l;

	i = 0;
	ps.position = 0;
	ps.target = target(stack, help);
	moves = totmvs(0, ps.target, stack, help);
	l = stack;
	while (stack)
	{
		n = target(stack, help);
		if (totmvs(i, n, l, help) < moves)
		{
			moves = totmvs(i, n, l, help);
			ps.position = i;
			ps.target = n;
		}
		stack = stack->next;
		i++;
	}
	return (ps);
}

void	algo(t_node **stack, t_node **helper)
{
	t_my_target	ch_b;
	t_my_target	ch_a;

	push(stack, helper, 'b');
	push(stack, helper, 'b');
	while (ft_lstsize(*stack) > 3)
	{
		ch_a = best_move(*stack, *helper, target_atob);
		move_a_b(ch_a.position, ch_a.target, stack, helper);
		push(stack, helper, 'b');
	}
	sort_three(stack);
	while (ft_lstsize(*helper) > 0)
	{
		ch_b = best_move(*helper, *stack, target_btoa);
		move_b_a(ch_b.position, ch_b.target, helper, stack);
		push(helper, stack, 'a');
	}
	move_max(max_position(*stack), stack);
}
