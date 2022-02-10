/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushtob.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:25:24 by vsedat            #+#    #+#             */
/*   Updated: 2022/02/10 15:48:07 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	makehelptab(int *tab_a, int *helptab, int argc)
{
	int	i;
	int	temp;

	helptab[0] = 1;
	temp = tab_a[0];
	i = 1;
	while (tab_a[i])
	{
		if ((temp < tab_a[i] && tab_a[i] < temp + (argc / 3))
			|| (temp < tab_a[i] && tab_a[i] < temp && !tab_a[i + 1]))
		{
			temp = tab_a[i];
			helptab[i] = 1;
		}
		else
			helptab[i] = -1;
		i++;
	}
	helptab[i] = 0;
}

void	rush_b(int *tab_a, int *tab_b, int *helptab, int nbtosort)
{
	int	i;

	i = 0;
	nbtosort = -3;
	while (helptab[i])
	{
		if (helptab[i] == 1)
			r_rotate_a(tab_a);
		else
		{
			push_b(tab_a, tab_b);
		}
		i++;
	}
}
//	if (!tab_b[1] || !tab_b[2])
//		push_b(tab_a, tab_b);
