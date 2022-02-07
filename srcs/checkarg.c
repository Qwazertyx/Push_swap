/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkarg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:50:43 by vsedat            #+#    #+#             */
/*   Updated: 2022/02/07 16:32:31 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/push_swap.h"

int	minmax(char *argv[])
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (lennum(argv[i]) > 10)
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

int	checkarg(int argc, char *argv[])
{
	int	i;

	if (argc < 2)
		return (0);
	i = 1;
	while (argv[i])
	{
		if (!isnumber(argv[i++]))
			return (0);
	}
	i = 1;
	if (!aremultiple(argv))
		return (0);
	return (minmax(argv));
}
