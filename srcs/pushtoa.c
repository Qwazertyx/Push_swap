/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:38:27 by vsedat            #+#    #+#             */
/*   Updated: 2022/02/11 11:30:56 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	movea(int *tab_b, int *tab_a)
{
	int	i;

	if (isbiggest(tab_b, tab_a))
		firsttotop(tab_a, lentab(tab_a));
	if (tab_b[0] < tab_a[0] && tab_b[0] > tab_a[lentab(tab_a)])
		i = lentab(tab_a);
	i = 1;
	while (tab_a[i])
	{
		if (tab_a[i] > tab_b[0] && tab_b[0] > tab_a[i - 1])
		{
			if (i >= lentab(tab_a) / 2)
			{
				while (i++ < lentab(tab_a))
					rotate_a(tab_a);
			}
			else
			{
				while (i-- > 0)
					r_rotate_a(tab_a);
			}
		}
		i++;
	}
}

void	moveb(int *tab_b, int *tab_a)
{
	int	i;

	i = movespredict(tab_a, tab_b);
	if (i > lentab(tab_b) / 2)
		while (i++ < lentab(tab_b))
			rotate_b(tab_b);
	else
		while (i-- > 0)
			r_rotate_b(tab_b);
}

void	returnbetter_b(int *tab_b, int *tab_a)
{
	while (tab_b[0])
	{
		moveb(tab_b, tab_a);
		movea(tab_b, tab_a);
		push_a(tab_a, tab_b);
	}
}
