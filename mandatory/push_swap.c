/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:54:15 by sfartah           #+#    #+#             */
/*   Updated: 2025/02/26 16:59:42 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	char	*join;
	t_node	*stack_a;
	t_node	*stack_b;
	int		l;

	stack_b = NULL;
	join = NULL;
	stack_a = NULL;
	l = 0;
	if (ac == 1)
		return (0);
	join = args_to_str(ac, av);
	if (!join)
		return (0);
	stack_a = str_to_list(join, &l);
	if (l)
		return (free(join), 1);
	if (!stack_a)
		return (0);
	if (check_errors(join, stack_a))
		return (free_stack(stack_a), free(join), 1);
	sort(&stack_a, &stack_b);
	return (free_stack(stack_a), free(join), 0);
}
