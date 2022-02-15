/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:27:28 by vsedat            #+#    #+#             */
/*   Updated: 2022/02/15 16:43:00 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	main(int argc, char *argv[])
{
	int	*tab_a;
	int	*tab_b;

	if (!checkarg(argc, argv))
		return (0 * write(2, "Error\n", 6));
	tab_a = malloc(argc * sizeof(int));
	tab_b = malloc(argc * sizeof(int));
	maketab(argc, argv, tab_a, tab_b);
	if (argc == 3 && !issorted(tab_a))
		pushtwo(tab_a);
	else if (argc == 4 && !issorted(tab_a))
		pushthree(tab_a);
	else if (argc == 6 && (!issorted(tab_a)))
		pushfive(tab_a, tab_b, argc);
	else if (!issorted(tab_a))
		ft_sort(tab_a, tab_b, argc);
	free(tab_a);
	free(tab_b);
	return (0);
}
