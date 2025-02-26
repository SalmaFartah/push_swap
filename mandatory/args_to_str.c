/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_to_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 12:38:19 by sfartah           #+#    #+#             */
/*   Updated: 2025/02/25 18:06:17 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*args_to_str(int ac, char **av)
{
	int		i;
	char	*j;

	i = 0;
	j = NULL;
	while (++i < ac)
	{
		if (is_empty(av[i]))
		{
			write(2, "Error\n", 6);
			free(j);
			j = NULL;
			exit(1);
		}
		j = ft_strjoin(j, av[i]);
		if (!j)
			return (NULL);
	}
	return (j);
}
