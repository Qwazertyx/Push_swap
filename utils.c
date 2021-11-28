/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:48:00 by vsedat            #+#    #+#             */
/*   Updated: 2021/11/28 17:15:47 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lennum(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (str[0] == '-')
		i--;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*dup;
	int		c;

	c = 0;
	dup = malloc((1 + ft_strlen(s1)) * sizeof(char));
	if (!dup)
		return (0);
	while (s1[c])
	{
		dup[c] = s1[c];
		c++;
	}
	dup[c] = '\0';
	return (dup);
}

int	isnumber(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
