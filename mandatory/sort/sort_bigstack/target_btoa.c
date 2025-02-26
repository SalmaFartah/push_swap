/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target_btoa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:13:23 by sfartah           #+#    #+#             */
/*   Updated: 2025/02/13 18:13:24 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	target_btoa(t_node *node_b, t_node *stack_a)
{
	int		ps;
	int		i;
	long	n;
	long	holder;

	i = 0;
	ps = 0;
	n = stack_a->content - node_b->content;
	while (stack_a)
	{
		holder = stack_a->content - node_b->content;
		if ((n > 0 && holder > 0 && holder < n) || (n < 0 && holder > 0) \
		|| (n < 0 && holder < 0 && holder < n))
		{
			n = holder;
			ps = i;
		}
		i++;
		stack_a = stack_a->next;
	}
	return (ps);
}
