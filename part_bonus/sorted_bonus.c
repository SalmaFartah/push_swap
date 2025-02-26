/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorted_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 11:43:10 by sfartah           #+#    #+#             */
/*   Updated: 2025/02/26 17:14:26 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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
