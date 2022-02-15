/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkarg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:50:43 by vsedat            #+#    #+#             */
/*   Updated: 2022/02/15 20:21:27 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	minmax(char *argv[])
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (lennum(argv[i]) > 13)
			return (0);
		i++;
	}
	return (1);
}

int	aremultiple(char *argv[])
{
	int	i;
	int	y;

	i = 1;
	while (argv[i])
	{
		y = 1;
		while (argv[y])
		{
			if (!ft_strcmp(argv[i], argv[y]) && i != y)
				return (0);
			y++;
		}
		i++;
	}
	return (1);
}

int	toosmbig(char *argv[])
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) > 2147483647)
			return (0);
		if (ft_atoi(argv[i]) < -2147483648)
			return (0);
		i++;
	}
	return (1);
}

int	checkarg(int argc, char *argv[])
{
	int	i;

	argc = 0;
	i = 0;
	while (argv[++i])
		if (argv[i][0] == '-' && argv[i][1] == '0')
			argv[i] = "0";
	i = 1;
	while (argv[i])
	{
		if (!isnumber(argv[i]) || (argv[i][0] == '-' && !argv[i][1]))
			return (0);
		if (argv[i] == '\0')
			return (0);
		i++;
	}
	if (!aremultiple(argv))
		return (0);
	if (!toosmbig(argv))
		return (0);
	return (minmax(argv));
}
