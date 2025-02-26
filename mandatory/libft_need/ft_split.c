/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 09:39:57 by sfartah           #+#    #+#             */
/*   Updated: 2025/02/17 12:41:28 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	cnt_words(char *s)
{
	int	cnt;
	int	u;

	if (!s)
		return (0);
	u = 0;
	cnt = 0;
	while (s[u])
	{
		if ((s[u] != 32) && (u == 0 || s[u - 1] == 32))
			cnt++;
		u++;
	}
	return (cnt);
}

static int	ft_estrlen(char *str)
{
	int	cnt;

	cnt = 0;
	while (str[cnt] && str[cnt] != 32)
		cnt++;
	return (cnt);
}

static char	*allocate_fill(char *s, int b)
{
	int		i;
	char	*p;

	i = 0;
	p = malloc(b + 1);
	while (i < b)
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

static void	ft_free(char **p, int u)
{
	int	j;

	j = 0;
	while (j < u)
	{
		free(p[j]);
		j++;
	}
	free(p);
}

char	**ft_split(char *str)
{
	char	**p;
	int		i;
	int		m;

	i = 0;
	m = 0;
	p = malloc((cnt_words(str) + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	while (str[i])
	{
		if (str[i] != 32 && (i == 0 || str[i - 1] == 32))
		{
			p[m] = allocate_fill(&str[i], ft_estrlen(&str[i]));
			if (!p[m])
				return (ft_free(p, m), NULL);
			m++;
		}
		i++;
	}
	p[m] = NULL;
	return (p);
}
