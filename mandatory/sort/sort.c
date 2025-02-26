/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 11:19:26 by sfartah           #+#    #+#             */
/*   Updated: 2025/02/20 11:19:30 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort(t_node **stack, t_node **helper)
{
	if (!sorted(*stack) && (ft_lstsize(*stack) == 3 || ft_lstsize(*stack) == 2))
		sort_three(stack);
	else if (!sorted(*stack) && ft_lstsize(*stack) == 4)
		sort_four(stack, helper);
	else if (!sorted(*stack) && ft_lstsize(*stack) > 4)
		algo(stack, helper);
}
