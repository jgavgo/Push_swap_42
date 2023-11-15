/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavilan <jgavilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 00:03:47 by jgavilan          #+#    #+#             */
/*   Updated: 2023/11/15 21:45:05 by jgavilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stackb_org(t_stacks *argm)
{
	int	lenb;

	lenb = argm->lenb;
	if (lenb > 4)
	{
		if (argm->stackb[0] < argm->stackb[lenb])
			ft_rb(argm);
		return ;
	}
	return ;
}

int	check_midle(t_stacks *argm, int value, char stack)
{
	int	i;

	i = 0;
	if (stack == 'a')
	{
		while (argm->stacka[i] != value)
			i++;
	}
	else
	{
		while (argm->stackb[i] != value)
			i++;
	}
	return (i);
}