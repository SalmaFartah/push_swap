/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:15:52 by sfartah           #+#    #+#             */
/*   Updated: 2025/02/22 12:45:37 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	move_stack(int position, t_node **stack, char c)
{
	int	half;

	half = ft_lstsize(*stack) / 2;
	while (position <= half && position > 0)
	{
		rot(stack, c);
		position--;
	}
	while (position > half && position < ft_lstsize(*stack))
	{
		reverse_rot(stack, c);
		position++;
	}
}

void	move_a_b(int ps, int tgps, t_node **stack, t_node **helper)
{
	int	halfs;
	int	halfh;

	if (ps == 0 && tgps == 0)
		return ;
	halfs = ft_lstsize(*stack) / 2;
	halfh = ft_lstsize(*helper) / 2;
	if (ps <= halfs && tgps <= halfh)
	{
		while (ps-- > 0 && tgps-- > 0)
			rr(stack, helper);
		ps++;
	}
	else if (ps > halfs && tgps > halfh)
	{
		while (ps < ft_lstsize(*stack) && tgps < ft_lstsize(*helper))
		{
			rrr(stack, helper);
			ps++;
			tgps++;
		}
	}
	move_stack(ps, stack, 'a');
	move_stack(tgps, helper, 'b');
}

void	move_b_a(int ps, int tgps, t_node **stack, t_node **helper)
{
	int	halfs;
	int	halfh;

	if (ps == 0 && tgps == 0)
		return ;
	halfs = ft_lstsize(*stack) / 2;
	halfh = ft_lstsize(*helper) / 2;
	if (ps <= halfs && tgps <= halfh)
	{
		while (ps-- > 0 && tgps-- > 0)
			rr(stack, helper);
		ps++;
	}
	else if (ps > halfs && tgps > halfh)
	{
		while (ps < ft_lstsize(*stack) && tgps < ft_lstsize(*helper))
		{
			rrr(stack, helper);
			ps++;
			tgps++;
		}
	}
	move_stack(ps, stack, 'b');
	move_stack(tgps, helper, 'a');
}

void	move_max(int position, t_node **stack)
{
	int	half;

	half = ft_lstsize(*stack) / 2;
	if (position <= half)
	{
		while (position >= 0)
		{
			rot(stack, 'a');
			position--;
		}
	}
	else
	{
		while (position < ft_lstsize(*stack) - 1)
		{
			reverse_rot(stack, 'a');
			position++;
		}
	}
}
