/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:00:54 by vsedat            #+#    #+#             */
/*   Updated: 2022/01/03 18:02:17 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include	<stdlib.h>
# include	<unistd.h>

int		minmax(char *argv[]);
int		aremultiple(char *argv[]);
int		checkarg(int argc, char *argv[]);
int		lennum(char *str);
int		isnumber(char *str);
int		ft_strcmp(char *s1, char *s2);
void	maketab(int argc, char *argv[], int *tab_a, int *tab_b);
void	printab(char **tab_a, char **tab_b, int size);
int		sizeint(int a);
void	swap_a(int *tab_a);
void	swap_b(int *tab_b);
void	ss(int *tab_a, int *tab_b);
void	push_up(int *tab);
void	push_down(int *tab);
void	push_a(int *tab_a, int *tab_b);
void	push_b(int *tab_a, int *tab_b);
void	rotate_a(int *tab_a);
void	rotate_b(int *tab_b);
void	rr(int *tab_a, int *tab_b);
void	r_rotate_a(int *tab_a);
void	r_rotate_b(int *tab_b);
void	rrr(int *tab_a, int *tab_b);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *b, int c, size_t len);
int		tests_f(char **tab_a, char **tab_b, int size);
void	ft_sort(int *tab_a, int *tab_b, int argc);
void	actions(int *tab_a, int scan, int size);
int		findnextsmol(int *tab_a, int smol);
void	firsttotop(int *tab_a, int argc);

#endif
