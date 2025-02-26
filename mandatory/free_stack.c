/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:55:55 by sfartah           #+#    #+#             */
/*   Updated: 2025/02/20 19:55:56 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_node *stack)
{
	t_node	*tmp;

	while (stack)
	{
		tmp = stack->next;
		free(stack);
		stack = tmp;
	}
}
