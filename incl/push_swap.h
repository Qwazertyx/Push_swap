/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsedat <vsedat@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:00:54 by vsedat            #+#    #+#             */
/*   Updated: 2022/02/15 15:58:02 by vsedat           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include	<stdlib.h>
# include	<unistd.h>
# include <stdio.h>

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
int		movespredict(int *tab_a, int *tab_b);
int		togooda(int *tab_a, int *tab_b, int nb);
int		totopb(int *tab_b, int nb);
int		lentab(int *tab);
int		findnumber(int *tab_a, int number);
void	returnbetter_b(int *tab_b, int *tab_a);
long	ft_atoi(const char *str);
void	rush_b(int *tab_a, int *tab_b, int *helptab, int nbtosort);
void	makehelptab(int *tab_a, int *helptab, int argc);
int		findsmol(char *argv[]);
int		isbiggest(int *tab_b, int *tab_a);
int		issorted(int *tab_a);
void	pushtwo(int *tab_a);
void	pushthree(int *tab_a);
void	pushfive(int *tab_a, int *tab_b, int argc);
int		movea(int *tab_b, int *tab_a);

#endif
