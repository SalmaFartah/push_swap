/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfartah <sfartah@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 21:48:59 by sfartah           #+#    #+#             */
/*   Updated: 2025/02/26 17:37:59 by sfartah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*k;

	k = (unsigned char *)s;
	while (n--)
		k[n] = 0;
}
