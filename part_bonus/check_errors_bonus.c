/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 10:39:51 by sfartah           #+#    #+#             */
/*   Updated: 2025/02/26 18:51:43 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	is_empty(char *s)
{
	int	i;

	i = 0;
	if (!s[i])
		return (1);
	while (s[i] == 32)
	{
		if (s[i + 1] == '\0')
			return (1);
		i++;
	}
	return (0);
}

int	another_char(char *s)
{
	int	i;

	if (!s)
		return (1);
	i = 0;
	while (s[i])
	{
		if ((!ft_isdigit(s[i]) && s[i] != 32 && s[i] != '-' && s[i] != '+') \
			|| ((s[i] == '-' && !ft_isdigit(s[i + 1])) \
			|| ((s[i] == '+' && !ft_isdigit(s[i + 1])) \
			|| (ft_isdigit(s[i]) && s[i + 1] == '-')) \
			|| (ft_isdigit(s[i]) && s[i + 1] == '+')))
			return (1);
		i++;
	}
	return (0);
}

int	dupp(t_node *lst)
{
	t_node	*help;
	t_node	*next;

	help = lst;
	while (help)
	{
		next = help->next;
		while (next)
		{
			if (help->content == next->content)
				return (1);
			next = next->next;
		}
		help = help->next;
	}
	return (0);
}

int	check_errors(char *s, t_node *stack)
{
	if (!s || !stack)
		return (1);
	if (another_char(s) || (!another_char(s) && dupp(stack)))
		return (write(2, "Error\n", 6), 1);
	return (0);
}
