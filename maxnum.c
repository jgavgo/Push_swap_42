/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maxnum.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavilan <jgavilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 00:03:47 by jgavilan          #+#    #+#             */
/*   Updated: 2023/11/08 00:23:59 by jgavilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	order_chunks(t_stacks *argm, int num_chunks)
{
	int	multi;
	int	k;

	multi = 1;
	while (multi <= num_chunks && argm->lena != 0)
	{
		if (!search_minmax(argm, (argm->len / num_chunks), multi))
			return ;
		else
		{
			k = search_minmax(argm, (argm->len / num_chunks), multi);
			while (argm->stacka[0] != k)
			{
				if (k <= argm->lena / 2)
					ft_ra(argm);
				else if (k > argm->lena / 2)
					ft_rra(argm);
			}
			ft_pb(argm);
		}
	}
	push_b(argm);
}

int	search_minmax(t_stacks *argm, int range, int min_max)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	argm->min = range * (min_max - 1);
	argm->max = range * min_max;
	while (i < argm->lena && argm->stacka[k] <= argm->max)
	{
		if (argm->stacka[k] < argm->stacka[i])
			k = i;
		else
			i++;
	}
	return (k);
}

int	search_max(int rev_count, t_stacks *argm)
{
	int	i;

	i = 0;
	while (argm->stackb[i] != rev_count)
		i++;
	return (i);
}

void	push_b(t_stacks *argm)
{
	int	rev_count;
	int	i;

	rev_count = argm->len;
	while (argm->lenb >= 0)
	{
		i = search_max(rev_count, argm);
		while (argm->stackb[0] != rev_count)
		{
			if (i < argm->lenb / 2)
				ft_rrb(argm);
			else if (i >= argm->lenb / 2)
				ft_rb(argm);
		}
		ft_pa(argm);
		rev_count--;
	}
}


int	check_finish(t_stacks *argm)
{
	int	i;

	i = 0;
	while (i < argm->len && argm->len == argm->lena)
	{
		if (argm->stacka[i] == i)
			i++;
		else
			return (0);
	}
	argm->memsolv = 1;
	return (argm->memsolv);
}
