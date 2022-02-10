/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushtoatest.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:25:22 by vsedat            #+#    #+#             */
/*   Updated: 2022/02/10 15:19:14 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	makestacktab(int nbrr, int *stacktab, int *tab_b)
{
	int	i;
	int	temp;

	i = 0;
	while (i < lentab(tab_b))
	{
		if (i > lentab(tab_b) * 3 / 4)
		{
			stacktab[i] = 4;
		}
		else if (i > lentab(tab_b) / 2)
		{
			stacktab[i] = 3;
		}
		else if (i > lentab(tab_b) / 4)
		{
			stacktab[i] = 2;
		}
		else
			stacktab[i] = 1;
		i++;
	}
	stacktab[i] = 0;
}

void	gphundred(int *tab_a, int *tab_b, int nbtosort, int *stacktab)
{
	int	i;

	i = 0;
	if (tab_a[0] > nbtosort / 2)
	{
		while (tab_a[0] / 10 > stacktab[i] * nbtosort / 4)
		{
			r_rotate_b(tab_b);
			r_rotate_b(stacktab);
		}
		push_b(tab_a, tab_b);
	}
	else
		push_b(tab_a, tab_b);
}

void	goodpush_b(int *tab_a, int *tab_b, int nbtosort)
{
	int	*stacktab;
	int	nbrr;

	nbrr = 0;
	stacktab = malloc(nbtosort * sizeof(int));
	makestacktab(nbrr, stacktab, tab_b);
	if (!tab_b[0] || !tab_b[1])
		push_b(tab_a, tab_b);
	else
	{
		if (nbtosort >= 200)
		{
			if (tab_a[0] > nbtosort / 2)
			{
				push_b(tab_a, tab_b);
				r_rotate_b(tab_b);
			}
			else
				push_b(tab_a, tab_b);
		}
		if (nbtosort >= 30 && nbtosort < 200)
			gphundred(tab_a, tab_b, nbtosort, stacktab);
		if (nbtosort < 30)
			push_b(tab_a, tab_b);
	}
}

void	returnbetter_b(int *tab_b, int *tab_a, int argc)
{
	while (tab_b[0])
	{
		if (isbiggest(tab_b, tab_a))
		{
			firsttotop(tab_a, argc);
			push_a(tab_a, tab_b);
		}
		if (tab_b[0] < tab_a[0] && tab_b[0] > tab_a[lentab(tab_a) - 1])
			push_a(tab_a, tab_b);
		else
		{
			if (tab_b[0] > tab_a[0] || tab_b[0] - tab_a[0] > lentab(tab_a) / 2)
			{
				r_rotate_a(tab_a);
			}
			else
			{
				rotate_a(tab_a);
			}
		}
	}
}
