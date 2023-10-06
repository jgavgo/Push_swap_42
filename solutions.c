/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solutions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavilan <jgavilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:27:08 by jgavilan          #+#    #+#             */
/*   Updated: 2023/10/06 23:44:51 by jgavilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	order2(t_stacks *argm)
{
	if (argm->stacka[0] > argm->stacka[1])
		ft_sa(argm);
	return ;
}

void	order3(t_stacks *a)
{
	if (a->stacka[0] > a->stacka[1] && a->stacka[0] < a->stacka[2])
		ft_sa(a);
	else if (a->stacka[0] > a->stacka[1] && a->stacka[1] > a->stacka[2])
	{
		ft_sa(a);
		ft_rra(a);
	}
	else if (a->stacka[0] > a->stacka[1] && a->stacka[0] > a->stacka[2])
		ft_ra(a);
	else if (a->stacka[0] < a->stacka[1] && a->stacka[0] > a->stacka[2])
		ft_rra(a);
	else if (a->stacka[0] < a->stacka[1] && a->stacka[1] > a->stacka[2])
	{
		ft_rra(a);
		ft_sa(a);
	}
}

void	order4(t_stacks *argm)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < argm->lena)
	{
		if (argm->stacka[j] < argm->stacka[i])
			j = i;
		else
			i++;
	}
	if (i <= 1 && argm->stacka[0] != j)
		ft_ra(argm);
	else if (i > 1 && argm->stacka[0] != j)
	{
		while (argm->stacka[0] != j)
		{
			ft_rra(argm);
		}
	}
	ft_pb(argm);
	order3(argm);
	ft_pa(argm);
	return ;
}

void	order5(t_stacks *argm)
{
	int	i;

	i = 0;
	while (argm->stacka[i] != 0)
		i++;
	if (i <= 2 && argm->stacka[0] != 0)
	{
		while (argm->stacka[0] != 0)
		{
			ft_ra(argm);
		}
	}
	else if (i > 2 && argm->stacka[0] != 0)
	{
		while (argm->stacka[0] != 0)
		{
			ft_rra(argm);
		}
	}
	ft_pb(argm);
	order4(argm);
	ft_pa(argm);
	return ;
}
