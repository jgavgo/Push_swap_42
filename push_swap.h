/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavilan <jgavilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:06:18 by jgavilan          #+#    #+#             */
/*   Updated: 2023/09/28 23:32:51 by jgavilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_test {
	int	random;
}	t_test;

typedef struct s_stacks
{
	int	*stacka;
	int	*stackb;
	int	*stackaux;
	int	len;
	int	lena;
	int	lenb;
	int	flag_error;
	int	memsolv;
	t_test	test;
}				t_stacks;

int		valid_args(int *stackaux, char **argv, int argc);
int		ini_stacks(int argc, t_stacks *argm);
int		ft_atoi(const char *str);
void	ft_error(int i);
void	ft_free(t_stacks *argm);

#endif