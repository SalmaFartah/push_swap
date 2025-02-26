/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_list_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 13:19:56 by sfartah           #+#    #+#             */
/*   Updated: 2025/02/26 17:54:02 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static int	ft_atoi(const char *str, int *p)
{
	long	c;
	int		u;
	int		sign;

	c = 0;
	u = 0;
	sign = 1;
	while (str[u] == 32 || (str[u] >= 9 && str[u] <= 13))
		u++;
	if (str[u] == '-' || str[u] == '+')
	{
		if (str[u++] == '-')
			sign = -1;
	}
	while (str[u] >= '0' && str[u] <= '9')
	{
		c = (c * 10 + (str[u] - 48));
		if ((sign * c > INT_MAX) || (sign * c < INT_MIN))
			return(write(2, "Error\n", 6), *p = 1) ;
		u++;
	}
	return (sign * c);
}

static void	ft_free(char **st)
{
	int	i;

	i = 0;
	while (st[i])
		free(st[i++]);
	free(st);
}

t_node	*str_to_list(char *s, int *l)
{
	t_node	*head;
	char	**sp;
	int		i;
	t_node	*new;

	head = NULL;
	sp = ft_split(s);
	if (!sp)
		return (NULL);
	i = 0;
	while (sp[i])
	{
		new = lstnew(ft_atoi(sp[i], l));
		if (!new || *l)
			return (free_stack(head), free(new), ft_free(sp), NULL);
		ft_lstadd_back(&head, new);
		i++;
	}
	return (ft_free(sp), head);
}
