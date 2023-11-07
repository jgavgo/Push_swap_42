/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavilan <jgavilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:06:18 by jgavilan          #+#    #+#             */
/*   Updated: 2023/11/07 23:25:06 by jgavilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

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
	int	min;
	int	max;
}				t_stacks;

int		valid_args(char **argv, int argc);
int		ini_stacks(int argc, t_stacks *argm);
int		ft_atoi(const char *str);
void	ft_error(void);
void	ft_free(t_stacks *argm);
void	sel_solution(t_stacks *argm);
void	fill_stacks(t_stacks *argm, int argc, char **argv);
void	index_stacka(t_stacks *argm);
void	ft_rra(t_stacks *argm);
void	ft_rrb(t_stacks *argm);
void	ft_rrr(t_stacks *argm);
void	ft_sa(t_stacks *argm);
void	ft_sb(t_stacks *argm);
void	ft_ss(t_stacks *argm);
void	ft_pa(t_stacks *argm);
void	ft_pb(t_stacks *argm);
void	ft_ra(t_stacks *argm);
void	ft_rb(t_stacks *argm);
void	ft_rr(t_stacks *argm);
void	order2(t_stacks *argm);
void	order3(t_stacks *argm);
void	order4(t_stacks *argm);
void	order5(t_stacks *argm);
int		repeat_num(char **argv, int argc);
void	order_chunks(t_stacks *argm, int num_chunks);
int		check_finish(t_stacks *argm);
int		search_minmax(t_stacks *argm, int range, int min_max);
void	push_b(t_stacks *argm);
int		search_max(int rev_count, t_stacks *argm);

#endif