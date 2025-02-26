/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 12:03:56 by sfartah           #+#    #+#             */
/*   Updated: 2025/02/26 17:37:39 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

t_node	*ft_lstlast(t_node *lst)
{
	t_node	*last;

	last = lst;
	while (last)
	{
		if (!last->next)
			return (last);
		last = last->next;
	}
	return (last);
}
