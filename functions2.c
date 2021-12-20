/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:20:39 by vsedat            #+#    #+#             */
/*   Updated: 2021/12/19 18:44:45 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(int *tab_a)
{
	int	temp;
	int	i;

	i = 0;
	while (tab_a[i + 1])
		i++;
	temp = tab_a[i];
	push_down(tab_a);
	tab_a[i + 1] = 0;
	tab_a[0] = temp;
	write(1, "rra\n", 4);
}

void	rotate_b(int *tab_b)
{
	int	temp;
	int	i;

	i = 0;
	while (tab_b[i + 1])
		i++;
	temp = tab_b[i];
	push_down(tab_b);
	tab_b[0] = temp;
	tab_b[i + 1] = 0;
	write(1, "rrb\n", 4);
}

void	rr(int *tab_a, int *tab_b)
{
	int	temp;
	int	i;

	i = 0;
	while (tab_a[i + 1])
		i++;
	temp = tab_a[i];
	push_down(tab_a);
	tab_a[i + 1] = 0;
	tab_a[0] = temp;
	i = 0;
	while (tab_b[i + 1])
		i++;
	temp = tab_b[i];
	push_down(tab_b);
	tab_b[0] = temp;
	tab_b[i + 1] = 0;
	write(1, "rr\n", 3);
}
