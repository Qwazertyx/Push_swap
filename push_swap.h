/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:00:54 by vsedat            #+#    #+#             */
/*   Updated: 2021/11/29 00:28:14 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include	<stdlib.h>
# include "libft/libft.h"

int		minmax(char *argv[]);
int		aremultiple(char *argv[]);
int		checkarg(int argc, char *argv[]);
int		lennum(char *str);
int		isnumber(char *str);
int		ft_strcmp(char *s1, char *s2);
int		*maketab(int argc, char *argv[]);
void	printab(char **tab_a, char **tab_b, int size);
int		sizeint(int a);
void	swap_a(char **tab_a);
void	swap_b(char **tab_b);
void	ss(char **tab_a, char **tab_b);
void	push_up(char **tab);
void	push_down(char **tab);
void	push_a(char **tab_a, char **tab_b);
void	push_b(char **tab_a, char **tab_b);
void	rotate_a(char **tab_a);
void	rotate_b(char **tab_b);
void	rr(char **tab_a, char **tab_b);
void	r_rotate_a(char **tab_a);
void	r_rotate_b(char **tab_b);
void	rrr(char **tab_a, char **tab_b);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *b, int c, size_t len);
int		tests_f(char **tab_a, char **tab_b, int size);

#endif
