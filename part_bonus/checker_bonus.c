/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 15:41:08 by sfartah           #+#    #+#             */
/*   Updated: 2025/02/26 17:55:53 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	do_get(char *get, t_node **stack_a, t_node **stack_b)
{
	if (!ft_strcmp(get, "ra\n"))
		rot(stack_a);
	else if (!ft_strcmp(get, "rb\n"))
		rot(stack_b);
	else if (!ft_strcmp(get, "rr\n"))
		rr(stack_a, stack_b);
	else if (!ft_strcmp(get, "rra\n"))
		reverse_rot(stack_a);
	else if (!ft_strcmp(get, "rrb\n"))
		reverse_rot(stack_b);
	else if (!ft_strcmp(get, "rrr\n"))
		rrr(stack_a, stack_b);
	else if (!ft_strcmp(get, "sa\n"))
		swap(*stack_a);
	else if (!ft_strcmp(get, "sb\n"))
		swap(*stack_b);
	else if (!ft_strcmp(get, "ss\n"))
		ss(*stack_a, *stack_b);
	else if (!ft_strcmp(get, "pa\n"))
		push(stack_b, stack_a);
	else if (!ft_strcmp(get, "pb\n"))
		push(stack_a, stack_b);
	else
		return (write(2, "Error\n", 6), 1);
	return (0);
}

void	chek(t_node **stack_a, t_node **stack_b)
{
	char	*get;

	while (1)
	{
		get = get_next_line(0);
		if (get == NULL)
			break ;
		if (do_get(get, stack_a, stack_b))
		{
			free(get);
			exit(1);
		}
		free(get);
	}
	if (sorted(*stack_a) && !(*stack_b))
		write(1, "OK\n", 3);
	else if (!sorted(*stack_a) || *stack_b)
		write(1, "KO\n", 3);
}

int	main(int ac, char *av[])
{
	char	*join;
	t_node	*stack_a;
	t_node	*stack_b;
	int		l;

	l = 0;
	join = NULL;
	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
		return (0);
	join = args_to_str(ac, av);
	if (!join)
		return (0);
	stack_a = str_to_list(join, &l);
	if (l)
		return (1);
	if (!stack_a)
		return (0);
	if (check_errors(join, stack_a) == 1)
		return (free_stack(stack_a), free(join), 1);
	chek(&stack_a, &stack_b);
	return (free_stack(stack_a), free_stack(stack_b), free(join), 0);
}
