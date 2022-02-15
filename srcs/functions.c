/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:19:25 by vsedat            #+#    #+#             */
/*   Updated: 2022/02/15 16:29:40 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	swap_a(int *tab_a)
{
	int	temp;

	temp = tab_a[0];
	tab_a[0] = tab_a[1];
	tab_a[1] = temp;
	write(1, "sa\n", 3);
}

void	swap_b(int *tab_b)
{
	int	temp;

	temp = tab_b[0];
	tab_b[0] = tab_b[1];
	tab_b[1] = temp;
	write(1, "sb\n", 3);
}

void	ss(int *tab_a, int *tab_b)
{
	int	temp;

	temp = tab_a[0];
	tab_a[0] = tab_a[1];
	tab_a[1] = temp;
	temp = tab_b[0];
	tab_b[0] = tab_b[1];
	tab_b[1] = temp;
	write(1, "ss\n", 3);
}

void	push_up(int *tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		tab[i] = tab[i + 1];
		i++;
	}
	tab[i] = 0;
}

void	push_down(int *tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	while (i > 0)
	{
		tab[i] = tab[i - 1];
		i--;
	}
}
