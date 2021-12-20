/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:27:28 by vsedat            #+#    #+#             */
/*   Updated: 2021/12/19 19:53:00 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/*
void	affichage(int *tab_a, int *tab_b)
{
	int	i;

	i = 0;
	printf("tab a:\n");
	while (tab_a[i])
	{
		printf("%d\n", tab_a[i]);
		i++;
	}
	i = 0;
	printf("tab b:\n");
	while (tab_b[i])
	{
		printf("%d\n", tab_b[i]);
		i++;
	}
	printf("----\n");
}

void	test(int *tab_a, int *tab_b)
{
	affichage(tab_a, tab_b);
	rotate_a(tab_a);
	affichage(tab_a, tab_b);
	push_b(tab_a, tab_b);
	push_b(tab_a, tab_b);
	push_b(tab_a, tab_b);
	affichage(tab_a, tab_b);
	rotate_b(tab_b);
	affichage(tab_a, tab_b);
	r_rotate_a(tab_a);
	affichage(tab_a, tab_b);
	r_rotate_b(tab_b);
	affichage(tab_a, tab_b);
}
*/
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
	//affichage(tab_a, tab_b);
	return (0);
}
