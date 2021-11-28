/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:27:28 by vsedat            #+#    #+#             */
/*   Updated: 2021/11/29 00:29:27 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	tests_f(char **tab_a, char **tab_b, int size)
{
	printab(tab_a, tab_b, size);
	push_b(tab_a, tab_b);
	printab(tab_a, tab_b, size);
	return (0);
}

int	main(int argc, char *argv[])
{
	if (!checkarg(argc, argv))
		return (0 * write(1, "Error\n", 6));
	write (1, "ez\n", 3);
	maketab(argc, argv);
	return (0);
}
