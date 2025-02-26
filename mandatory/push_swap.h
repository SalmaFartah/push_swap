/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 17:52:57 by sfartah           #+#    #+#             */
/*   Updated: 2025/02/25 21:39:09 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
// ------------------------- STRUCT FOR LINKED_LST --------------------- //
typedef struct s_node
{
	long			content;
	struct s_node	*next;
}					t_node;
// -------------------------- STRUCT FOR TARGET ------------------------ //
typedef struct s_tar
{
	int	position;
	int	target;
}		t_my_target;
// ----------------------------- LINKED_LIST --------------------------- //
t_node		*lstnew(long content);
t_node		*ft_lstlast(t_node *lst);
int			ft_lstsize(t_node *lst);
void		ft_lstadd_back(t_node **lst, t_node *new);
void		ft_lstadd_front(t_node **lst, t_node *new);
// -------------------------- LIBFT_NEED ------------------------------- //
int			ft_strlen(char *s);
char		**ft_split(char *str);
char		*ft_strjoin(char *s1, char *s2);
int			ft_isdigit(int c);
void		*ft_calloc(size_t count, size_t size);
void		ft_bzero(void *s, size_t n);
int			ft_strcmp(char *s1, char *s2);
char		*ft_strdup(char *s1);
// --------------------------- CHECK_ERRORS -------------------------- //
int			check_errors(char *s, t_node *stack);
int			dupp(t_node *lst);
int			another_char(char *s);
int			is_empty(char *s);
// --------------------------- INSTRUCTIONS -------------------------- //
void		swap(t_node *stack, char c);
void		ss(t_node *stack_a, t_node *stack_b);
void		push(t_node **stack1, t_node **stack2, char c);
void		rot(t_node **stack, char c);
void		rr(t_node **stack1, t_node **stack2);
void		reverse_rot(t_node **stack, char c);
void		rrr(t_node **stack1, t_node **stack2);
// --------------------------- CREATE STACK -------------------------- //
char		*args_to_str(int ac, char **av);
t_node		*str_to_list(char *s, int *l);
void		free_stack(t_node *stack);
// ------------------------------- MOVE ------------------------------ //
void		move_a_b(int ps, int tgps, t_node **stack, t_node **helper);
void		move_b_a(int ps, int tgps, t_node **stack, t_node **helper);
void		move_stack(int position, t_node **stack, char c);
void		move_max(int position, t_node **stack);
// ---------------------------- CALC MOVES --------------------------- //
int			to_top(int position, t_node *stack);
int			target_atob(t_node *node, t_node *stack_b);
int			target_btoa(t_node *node_b, t_node *stack_a);
int			totmvs(int ps, int tgps, t_node *stack_a, t_node *stack_b);
t_my_target	best_move(t_node *stack, t_node *help, \
int (*target)(t_node *, t_node *));
void		algo(t_node **stack, t_node **helper);
// ------------------------------ SORT ------------------------------ //
int			max_position(t_node *stack);
void		sort_three(t_node **stack);
int			min_position(t_node *stack);
void		sort_four(t_node **stack, t_node **helper);
int			sorted(t_node *stack);
void		sort(t_node **stack, t_node **helper);

#endif