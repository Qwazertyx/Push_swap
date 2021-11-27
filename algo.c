/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:21:02 by vsedat            #+#    #+#             */
/*   Updated: 2021/11/27 19:37:40 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sizeint(int a)
{
	int	size;

	size = 1;
	while (a > 9)
	{
		size++;
		a /= 10;
	}
	return (size);
}

void	ft_putnbr_fd(int n, int fd)
{
	int long	nbl;

	nbl = n;
	if (nbl < 0)
	{
		write(fd, "-", 1);
		nbl *= -1;
	}
	if (nbl > 9)
	{
		ft_putnbr_fd(nbl / 10, fd);
		ft_putnbr_fd(nbl % 10, fd);
	}
	if (nbl <= 9)
	{
		nbl += '0';
		write(fd, &nbl, 1);
	}
}

void	printab(int *tab_a, int *tab_b, int size)
{
	int	i;

	i = 0;
	write(1, "--------------\n", 15);
	while (i < size)
	{
		ft_putnbr_fd(tab_a[i], 1);
		write(1, "  |  ", 5);
		ft_putnbr_fd(tab_b[i], 1);
		write(1, "\n", 1);
		i++;
	}
	write(1, "\n", 1);
}

int	*maketab(int argc, char *argv[])
{
	int	*tab_a;
	int	*tab_b;
	int	size;

	size = 0;
	tab_a = malloc((argc - 1) * sizeof(int));
	tab_b = malloc((argc - 1) * sizeof(int));
	while (size < argc - 1)
	{
		tab_a[size] = atoi(argv[size + 1]);
		size++;
	}
	printab(tab_a, tab_b, size);
	return (0);
}
