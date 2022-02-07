/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:18:17 by vsedat            #+#    #+#             */
/*   Updated: 2022/02/07 17:44:06 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	findnumber(int *tab_a, int number)
{
	int	i;

	i = 0;
	while (tab_a[i] != number)
		i++;
	return (i);
}

void	firsttotop(int *tab_a, int argc)
{
	if (findnumber(tab_a, 1) > (argc / 2))
		while (findnumber(tab_a, 1) != 0)
			rotate_a(tab_a);
	else
		while (findnumber(tab_a, 1) != 0)
			r_rotate_a(tab_a);
}

int	isbiggest(int *tab_b, int *tab_a)
{
	int	i;

	i = 0;
	while (tab_a[i])
	{
		if (tab_a[i] > tab_b[0])
			return (0);
		i++;
	}
	return (1);
}

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

int	lentab(int *tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	()

void	gphundred(int *tab_a, int *tab_b, int nbtosort)
{
	int	i;

	i = 0;
	if (tab_a[0] > nbtosort * 3 / 4)
	{
		push_b(tab_a, tab_b);
		r_rotate_b(tab_b);
	}
	else if (tab_a[0] > nbtosort / 2)
	{
		push_b(tab_a, tab_b);
		r_rotate_b(tab_b);
	}
	else if (tab_a[0] > nbtosort / 4)
	{
		push_b(tab_a, tab_b);
		r_rotate_b(tab_b);
	}
	else
		push_b(tab_a, tab_b);
}

void	goodpush_b(int *tab_a, int *tab_b, int nbtosort)
{
	if (!tab_b[0] || !tab_b[1])
	{
		push_b(tab_a, tab_b);
	}
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
		{
			if (tab_a[0] > nbtosort / 2)
				gphundred(tab_a, tab_b, nbtosort);
		}
		if (nbtosort < 30)
			push_b(tab_a, tab_b);
	}
}

void	rush_b(int *tab_a, int *tab_b, int *helptab, int nbtosort)
{
	int	i;

	i = 0;
	while (helptab[i])
	{
		if (helptab[i] == 1)
			r_rotate_a(tab_a);
		else
			goodpush_b(tab_a, tab_b, nbtosort);
		i++;
	}
	if (!tab_b[1] || !tab_b[2])
		push_b(tab_a, tab_b);
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
//optimiser le nombre de moves ex: go from 56 with 60 the max to 
//1 is only 5 moves down but here we choose 55 moves up :/
/*
void	affichage(int *tab_a, int *tab_b)
{
	int	i;

	i = 0;
	printf("tab a:\n");
	while (tab_a[i])
	{
		printf("%d\n", tab_a[i]);
		i++;
	}
	i = 0;
	printf("tab b:\n");
	while (tab_b[i])
	{
		printf("%d\n", tab_b[i]);
		i++;
	}
	printf("----\n");
}
*/

void	ft_sort(int *tab_a, int *tab_b, int argc)
{
	int	*helptab;

	firsttotop(tab_a, argc);
	helptab = malloc(argc * sizeof(int));
	makehelptab(tab_a, helptab, argc);
	rush_b(tab_a, tab_b, helptab, argc);
	returnbetter_b(tab_b, tab_a, argc);
	firsttotop(tab_a, argc);
	free(tab_a);
	free(tab_b);
	free(helptab);
}
