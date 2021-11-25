/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:00:54 by vsedat            #+#    #+#             */
/*   Updated: 2021/11/25 17:50:44 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include	<unistd.h>

int	minmax(char *argv[]);
int	aremultiple(char *argv[]);
int	checkarg(int argc, char *argv[]);
int	lennum(char *str);
int	isnumber(char *str);
int	ft_strcmp(char *s1, char *s2);

#endif
