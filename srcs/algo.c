/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:18:17 by vsedat            #+#    #+#             */
/*   Updated: 2022/02/09 15:35:26 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

void	ft_sort(int *tab_a, int *tab_b, int argc)
{
	int	*helptab;

	firsttotop(tab_a, argc);
	helptab = malloc(argc * sizeof(int));
	makehelptab(tab_a, helptab, argc);
	rush_b(tab_a, tab_b, helptab, argc);
	returnbetter_b(tab_b, tab_a);
	firsttotop(tab_a, argc);
	free(tab_a);
	free(tab_b);
	free(helptab);
}
