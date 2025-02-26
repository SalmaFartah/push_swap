/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 11:44:03 by sfartah           #+#    #+#             */
/*   Updated: 2025/02/26 18:43:26 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include "../checker_bonus.h"

char	*get_next_line(int fd);
char	*gn_strjoin(char *s1, char *s2);
size_t	ft_gstrlen(char *s);
int		ft_strchr(char *s, int c);
char	*bfnl(char *bf);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*afnl(char *bf);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif
#endif