/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:19:25 by vsedat            #+#    #+#             */
/*   Updated: 2021/11/29 00:13:49 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(char **tab_a)
{
	char	*temp;

	if (tab_a[0] && tab_a[1])
	{
		temp = tab_a[0];
		tab_a[0] = tab_a[1];
		tab_a[1] = temp;
	}
}

void	swap_b(char **tab_b)
{
	char	*temp;

	if (tab_b[0] && tab_b[1])
	{
		temp = tab_b[0];
		tab_b[0] = tab_b[1];
		tab_b[1] = temp;
	}
}

void	ss(char **tab_a, char **tab_b)
{
	swap_a(tab_a);
	swap_b(tab_b);
}

void	push_up(char **tab)
{
	int		i;

	i = 0;
	while (tab[i + 1])
	{
		tab[i] = tab[i + 1];
		i++;
	}
}

void	push_down(char **tab)
{
	int		i;

	i = 0;
	while (tab[i + 1])
		i++;
	while (i > 0)
	{
		tab[i] = tab[i - 1];
		i++;
	}
}
