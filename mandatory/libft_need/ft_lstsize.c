/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:25:38 by sfartah           #+#    #+#             */
/*   Updated: 2025/02/06 20:24:08 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lstsize(t_node *lst)
{
	t_node	*last;
	int		count;

	if (!lst)
		return (0);
	count = 0;
	last = lst;
	while (last)
	{
		count += 1;
		last = last->next;
	}
	return (count);
}
