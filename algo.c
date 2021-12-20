/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:18:17 by vsedat            #+#    #+#             */
/*   Updated: 2021/12/20 18:15:15 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	{
		while (findnumber(tab_a, 1) != 0)
		{
			rotate_a(tab_a);
		}
	}
	else
		while (findnumber(tab_a, 1) != 0)
			r_rotate_a(tab_a);
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
		if (temp < tab_a[i] && tab_a[i] < temp + (argc / 5))
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

/*
void	returnbetter_b(int *tab_b, int *tab_a)
{
	while (tab_b[0])
	{
		if (tab_b[0] > tab_a[0] && tab_b[0] < tab_a[1])
		{
			r_rotate_a(tab_a);
			push_a(tab_a, tab_b);
		}
		else
		{
			if (tab_b[0] > tab_a[0])
				r_rotate_a(tab_a);
			else
				rotate_a(tab_a);
		}
	}
}
*/

int	whereshouldigo(int *tab_a, int *tab_b)
{
	
}

void	goodpush_b(int *tab_a, int *tab_b)
{
	if (!tab_b[0] || !tab_b[1])
		push_b(tab_a, tab_b);
	else
	{
		while (tab_a[0] < tab_b[0] && tab_a[0] > tab_b[1])
			r_rotate_b(tab_b);
		rotate_b(tab_b);
		push_b(tab_a, tab_b);
	}
}

void	rush_b(int *tab_a, int *tab_b, int *helptab)
{
	int	i;

	i = 0;
	while (helptab[i])
	{
		if (helptab[i] == 1)
			r_rotate_a(tab_a);
		else
			goodpush_b(tab_a, tab_b);
		i++;
	}
	if (!tab_b[1] || !tab_b[2])
		push_b(tab_a, tab_b);
	free(helptab);
}

void	returnbetter_b(int *tab_b, int *tab_a)
{
	while (tab_b[0])
	{
		if (tab_b[0] > tab_a[0] && tab_b[0] < tab_a[1])
		{
			r_rotate_a(tab_a);
			push_a(tab_a, tab_b);
		}
		else
		{
			if (tab_b[0] > tab_a[0])
				r_rotate_a(tab_a);
			else
			{
				rotate_a(tab_a);
				// ca casse ici, je pense que cest si on est trop grand
				// on rentre pas dans la condition beetween au dessus logique
			}
		}
	}
}

//optimiser le nombre de moves ex: go from 56 with 60 the max to 
//1 is only 5 moves down but here we choose 55 moves up :/

void	ft_sort(int *tab_a, int *tab_b, int argc)
{
	int	*helptab;

	firsttotop(tab_a, argc);
	helptab = malloc(argc - 1 * sizeof(int));
	makehelptab(tab_a, helptab, argc);
	rush_b(tab_a, tab_b, helptab);
	returnbetter_b(tab_b, tab_a);
	firsttotop(tab_a, argc);
	free(tab_a);
	free(tab_b);
}
