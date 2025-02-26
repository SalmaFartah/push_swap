/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target_atob.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:05:38 by sfartah           #+#    #+#             */
/*   Updated: 2025/02/13 18:06:38 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	target_atob(t_node *node, t_node *stack_b)
{
	int		ps;
	int		i;
	long	n;
	long	holder;

	i = 0;
	ps = 0;
	n = node->content - stack_b->content;
	while (stack_b)
	{
		holder = node->content - stack_b->content;
		if ((n > 0 && holder > 0 && holder < n) || (n < 0 && holder > 0) \
		|| (n < 0 && holder < 0 && holder < n))
		{
			n = holder;
			ps = i;
		}
		i++;
		stack_b = stack_b->next;
	}
	return (ps);
}
