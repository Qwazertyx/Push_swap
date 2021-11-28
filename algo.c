/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:21:02 by vsedat            #+#    #+#             */
/*   Updated: 2021/11/28 17:29:37 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	printab(char **tab_a, char **tab_b, int size)
{
	int	i;
	int	style;

	i = 0;
	printf("-----------------------------\n");
	while (i < size)
	{
		if (tab_a[i])
			printf("%s", tab_a[i]);
		else
			printf("V");
		style = 0;
		while (style + ft_strlen(tab_a[i]) <= 10)
		{
			printf(" ");
			style++;
		}
		printf("|    ");
		if (tab_b[i])
			printf("%s", tab_b[i]);
		else
			printf("V");
		printf("\n");
		i++;
	}
	printf("           |\n  tab_a    |  tab_b\n");
	printf("-----------------------------\n\n");
}

int	*maketab(int argc, char *argv[])
{
	char	**tab_a;
	char	**tab_b;
	int		size;

	tab_a = malloc(argc * sizeof(char *));
	size = 0;
	while (size < argc - 1)
	{
		tab_a[size] = malloc(ft_strlen(argv[size + 1]) * sizeof(char));
		tab_a[size] = argv[size + 1];
		size++;
	}
	tab_a[size] = 0;
	tab_b = malloc(argc * sizeof(char *));
	size = 0;
	while (size < argc - 1)
		tab_b[size++] = 0;
	printab(tab_a, tab_b, size);
	swap_a(&tab_a);
	printab(tab_a, tab_b, size);
	return (0);
}
