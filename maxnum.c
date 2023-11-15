/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maxnum.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavilan <jgavilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 00:03:47 by jgavilan          #+#    #+#             */
/*   Updated: 2023/11/15 22:13:10 by jgavilan         ###   ########.fr       */
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
		k = search_min(argm);
		while (argm->stacka[0] != k)
		{
			// write(1, "valor posicion 0  --> \n", 24);
			if (check_midle(argm, k, 'a') <= argm->lena / 2)
				ft_ra(argm);
			else
				ft_rra(argm);
		}
		ft_pb(argm);
	}
	push_b(argm);
}

int	search_min(t_stacks *argm)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	// printf("lena --> %d\n\n", argm->lena);
	while (i < argm->lena)
	{
		// printf("value --> %d\n", argm->stacka[k]);
		if (argm->stacka[k] > argm->stacka[i])
			k = i;
		i++;
	}
	return (argm->stacka[k]);
}

int	search_max(t_stacks *argm)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	// printf("lena --> %d\n\n", argm->lena);
	while (i < argm->lenb)
	{
		// printf("value --> %d\n", argm->stacka[k]);
		if (argm->stackb[k] < argm->stackb[i])
			k = i;
		i++;
	}
	return (argm->stackb[k]);
}

void	push_b(t_stacks *argm)
{
	int	i;

	while (argm->lenb > 0)
	{
		i = search_max(argm);
		if (argm->stackb[0] != i)
		{
			// write(1, "el sack a esta vacio\n", 22);
			if (check_midle(argm, i, 'b') <= argm->lenb / 2)
				ft_rrb(argm);
			else
				ft_rb(argm);
		}
		ft_pa(argm);
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
