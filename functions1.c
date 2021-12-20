/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:20:35 by vsedat            #+#    #+#             */
/*   Updated: 2021/12/19 18:44:31 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(int *tab_a, int *tab_b)
{
	push_down(tab_a);
	tab_a[0] = tab_b[0];
	push_up(tab_b);
	write(1, "pa\n", 3);
}

void	push_b(int *tab_a, int *tab_b)
{
	push_down(tab_b);
	tab_b[0] = tab_a[0];
	push_up(tab_a);
	write(1, "pb\n", 3);
}

void	r_rotate_a(int *tab_a)
{
	int	temp;
	int	i;

	temp = tab_a[0];
	push_up(tab_a);
	i = 0;
	while (tab_a[i])
		i++;
	tab_a[i] = temp;
	tab_a[i + 1] = 0;
	write(1, "ra\n", 3);
}

void	r_rotate_b(int *tab_b)
{
	int	temp;
	int	i;

	temp = tab_b[0];
	push_up(tab_b);
	i = 0;
	while (tab_b[i])
		i++;
	tab_b[i] = temp;
	tab_b[i + 1] = 0;
	write(1, "rb\n", 3);
}

void	rrr(int *tab_a, int *tab_b)
{
	int	temp;
	int	i;

	temp = tab_a[0];
	push_up(tab_a);
	i = 0;
	while (tab_a[i])
		i++;
	tab_a[i] = temp;
	tab_a[i + 1] = 0;
	temp = tab_b[0];
	push_up(tab_b);
	i = 0;
	while (tab_b[i])
		i++;
	tab_b[i] = temp;
	tab_b[i + 1] = 0;
	write(1, "rrr\n", 4);
}
