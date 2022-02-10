/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:26:41 by vsedat            #+#    #+#             */
/*   Updated: 2022/02/09 12:32:11 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	findsmol(char *argv[])
{
	int	i;
	int	smol;
	int	ismol;

	smol = ft_atoi(argv[1]);
	ismol = 1;
	i = 2;
	while (argv[i])
	{
		if (smol > ft_atoi(argv[i]))
		{
			smol = ft_atoi(argv[i]);
			ismol = i;
		}
		i++;
	}
	return (ismol);
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
