/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:55:31 by sfartah           #+#    #+#             */
/*   Updated: 2025/02/26 17:37:35 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

t_node	*lstnew(long content)
{
	t_node	*nd;

	nd = malloc(sizeof(t_node));
	if (!nd)
		return (NULL);
	nd->content = content;
	nd->next = NULL;
	return (nd);
}
