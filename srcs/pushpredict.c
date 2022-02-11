/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushpredict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:07:11 by vsedat            #+#    #+#             */
/*   Updated: 2022/02/11 12:11:13 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	totopb(int *tab_b, int nb)
{
	if (nb >= (lentab(tab_b) / 2))
	{
		return (lentab(tab_b) - nb);
	}
	else
	{
		return (nb);
	}
}

int	totopa(int *tab_a, int nb)
{
	if (nb >= (lentab(tab_a) / 2))
	{
		return (lentab(tab_a) - nb);
	}
	else
	{
		return (nb);
	}
}

int	togooda(int *tab_a, int *tab_b, int nb)
{
	int	i;

	if (isbiggest(tab_b, tab_a))
		return (totopa(tab_a, nb));
	if (tab_b[nb] < tab_a[0] && tab_b[nb] > tab_a[lentab(tab_a)])
		return (0);
	i = 1;
	while (tab_a[i])
	{
		if (tab_a[i] > tab_b[nb] && tab_b[nb] > tab_a[i - 1])
		{
			if (i >= lentab(tab_a) / 2)
				return (lentab(tab_a) - i);
			else
				return (i);
		}
		i++;
	}
	return (0);
}

int	movespredict(int *tab_a, int *tab_b)
{
	int	nbmoves;
	int	goodi;
	int	i;

	goodi = 0;
	nbmoves = totopb(tab_b, 0) + togooda(tab_a, tab_b, 0);
	i = 1;
	while (tab_b[i])
	{
		if (nbmoves > totopb(tab_b, i) + togooda(tab_a, tab_b, i))
		{
			nbmoves = totopb(tab_b, i) + togooda(tab_a, tab_b, i);
			goodi = i;
		}
		i++;
	}
	return (goodi);
}
