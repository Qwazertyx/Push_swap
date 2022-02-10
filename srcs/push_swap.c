/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:27:28 by vsedat            #+#    #+#             */
/*   Updated: 2022/02/08 10:09:00 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	main(int argc, char *argv[])
{
	int	*tab_a;
	int	*tab_b;

	if (!checkarg(argc, argv))
		return (0 * write(1, "Error\n", 6));
	tab_a = malloc(argc * sizeof(int));
	tab_b = malloc(argc * sizeof(int));
	maketab(argc, argv, tab_a, tab_b);
	ft_sort(tab_a, tab_b, argc);
	return (0);
}
