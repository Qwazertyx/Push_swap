/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maketab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 17:21:02 by vsedat            #+#    #+#             */
/*   Updated: 2022/02/15 15:57:56 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	parsing(const char *str)
{
	int	i;

	i = 0;
	while ((((((str[i] == '\f' || str[i] == '\r')
						|| str[i] == ' ')
					|| str[i] == '\t')
				|| str[i] == '\n')
			|| str[i] == '\v') && str[i])
		i++;
	if (str[i] == '+' || str[i] == '-')
		i++;
	return (i);
}

int	sign(const char *str)
{
	int		i;
	int		sign;

	i = 0;
	sign = 1;
	while (str[i] && (str[i] < '0' || str[i] > '9'))
	{
		if (str[i] == '-')
			sign = -1;
		else if (str[i] == '+')
			sign = 1;
		i++;
	}
	return (sign);
}

long	ft_atoi(const char *str)
{
	int			i;
	int long	res;

	if (!str)
		return (0);
	i = parsing(str);
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res * sign(str));
}

int	findbig(char *argv[])
{
	int	i;
	int	big;
	int	isbig;

	big = ft_atoi(argv[1]);
	isbig = 1;
	i = 2;
	while (argv[i])
	{
		if (big < ft_atoi(argv[i]))
		{
			big = ft_atoi(argv[i]);
			isbig = i;
		}
		i++;
	}
	return (isbig);
}

void	maketab(int argc, char *argv[], int *tab_a, int *tab_b)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		tab_a[findsmol(argv) - 1] = i;
		argv[findsmol(argv)] = "99999999999";
		i++;
	}
	tab_a[argc - 1] = 0;
	i = 0;
	while (i < argc)
		tab_b[i++] = 0;
}
