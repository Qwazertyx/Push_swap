/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallcase.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 14:05:15 by vsedat            #+#    #+#             */
/*   Updated: 2022/02/15 15:08:09 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	issmallest(int *tab_b, int *tab_a)
{
	int	i;

	i = 0;
	while (tab_a[i])
	{
		if (tab_a[i] < tab_b[0])
			return (0);
		i++;
	}
	return (1);
}

void	pushtwo(int *tab_a)
{
	if (tab_a[0] > tab_a[1])
		r_rotate_a(tab_a);
}

void	pushthree(int *tab_a)
{
	if (tab_a[0] > tab_a[1] && tab_a[1] < tab_a[2] && tab_a[0] < tab_a[2])
		swap_a(tab_a);
	if (tab_a[0] > tab_a[1] && tab_a[1] > tab_a[2] && tab_a[0] > tab_a[2])
	{
		swap_a(tab_a);
		rotate_a(tab_a);
	}
	if (tab_a[0] > tab_a[1] && tab_a[1] < tab_a[2] && tab_a[0] > tab_a[2])
		r_rotate_a(tab_a);
	if (tab_a[0] < tab_a[1] && tab_a[1] > tab_a[2] && tab_a[0] < tab_a[2])
	{
		swap_a(tab_a);
		r_rotate_a(tab_a);
	}
	if (tab_a[0] < tab_a[1] && tab_a[1] > tab_a[2] && tab_a[0] > tab_a[2])
		rotate_a(tab_a);
}

void	pushfive(int *tab_a, int *tab_b, int argc)
{
	push_b(tab_a, tab_b);
	push_b(tab_a, tab_b);
	pushthree(tab_a);
	while (tab_b[0])
	{
		if (isbiggest(tab_b, tab_a))
		{
			while (!issmallest(tab_a, tab_a))
				r_rotate_a(tab_a);
			push_a(tab_a, tab_b);
		}
		else if (issmallest(tab_b, tab_a))
		{
			while (!issmallest(tab_a, tab_a))
				r_rotate_a(tab_a);
			push_a(tab_a, tab_b);
		}
		else
		{
			movea(tab_b, tab_a);
			push_a(tab_a, tab_b);
		}
	}
	firsttotop(tab_a, argc);
}
