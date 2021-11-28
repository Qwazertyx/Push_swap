/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:20:35 by vsedat            #+#    #+#             */
/*   Updated: 2021/11/28 17:21:08 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(char ***tab_a, char ***tab_b)
{
	if (tab_b)
	{
		push_down(tab_a);
		**tab_a[0] = **tab_b[0];
		push_up(tab_b);
	}
}

void	push_b(char ***tab_a, char ***tab_b)
{
	if (tab_a)
	{
		push_down(tab_b);
		**tab_b[0] = **tab_a[0];
		push_up(tab_a);
	}
}

void	rotate_a(char ***tab_a)
{
	char	*temp;
	int		i;

	*temp = **tab_a[0];
	push_up(tab_a);
	i = 0;
	while (tab_a[i])
		i++;
	**tab_a[i] = *temp;
	**tab_a[i + 1] = 0;
}

void	rotate_b(char ***tab_b)
{
	char	*temp;
	int		i;

	*temp = **tab_b[0];
	push_up(tab_b);
	i = 0;
	while (tab_b[i])
		i++;
	**tab_b[i] = *temp;
	**tab_b[i + 1] = 0;
}

void	rr(char ***tab_a, char ***tab_b)
{
	rotate_a(tab_a);
	rotate_b(tab_b);
}
