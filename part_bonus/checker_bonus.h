/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 13:01:51 by sfartah           #+#    #+#             */
/*   Updated: 2025/02/26 17:39:05 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "get_next_line_bonus/get_next_line_bonus.h"

typedef struct s_node
{
	long			content;
	struct s_node	*next;
}					t_node;

void		chek(t_node **stack, t_node **helper);
void		swap(t_node *stack);
void		ss(t_node *stack_a, t_node *stack_b);
void		push(t_node **stack1, t_node **stack2);
void		rot(t_node **stack);
void		rr(t_node **stack1, t_node **stack2);
void		reverse_rot(t_node **stack);
void		rrr(t_node **stack1, t_node **stack2);

t_node		*lstnew(long content);
t_node		*ft_lstlast(t_node *lst);
int			ft_lstsize(t_node *lst);
void		ft_lstadd_back(t_node **lst, t_node *new);
void		ft_lstadd_front(t_node **lst, t_node *new);

int			ft_strlen(char *s);
char		**ft_split(char *str);
char		*ft_strjoin(char *s1, char *s2);
int			ft_isdigit(int c);
void		*ft_calloc(size_t count, size_t size);
void		ft_bzero(void *s, size_t n);
int			ft_strcmp(char *s1, char *s2);
char		*ft_strdup(char *s1);

char		*args_to_str(int ac, char **av);
void		free_stack(t_node *stack);
t_node		*str_to_list(char *s, int *l);
int			sorted(t_node *stack);

int			check_errors(char *s, t_node *stack);
int			chek_max_min(t_node *lst);
int			dupp(t_node *lst);
int			another_char(char *s);
int			is_empty(char *s);

#endif
