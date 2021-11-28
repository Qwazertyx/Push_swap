/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 16:20:39 by vsedat            #+#    #+#             */
/*   Updated: 2021/11/28 17:12:58 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_rotate_a(char ***tab_a)
{
	char	*temp;
	int		i;

	i = 0;
	while (tab_a[i + 1])
		i++;
	temp = *tab_a[i];
	push_down(tab_a);
	*tab_a[0] = temp;
}

void	r_rotate_b(char ***tab_b)
{
	char	*temp;
	int		i;

	i = 0;
	while (tab_b[i + 1])
		i++;
	temp = *tab_b[i];
	push_down(tab_b);
	*tab_b[0] = temp;
}

void	rrr(char ***tab_a, char ***tab_b)
{
	r_rotate_a(tab_a);
	r_rotate_b(tab_b);
}
