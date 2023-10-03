/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solutions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavilan <jgavilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:27:08 by jgavilan          #+#    #+#             */
/*   Updated: 2023/10/04 00:09:00 by jgavilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	order2(t_stacks *argm)
{
	if (argm->stacka[0] > argm->stacka[1])
		ft_sa(argm);
}

void	order3(t_stacks *argm)
{
	if (argm->stacka[0] > argm->stacka[1])
		ft_sa(argm);
	if (argm->stacka[0] > argm->stacka[2])
		ft_ra(argm);
}

void	order4(t_stacks *argm)
{
	if (argm->stacka[0] > argm->stacka[1])
		ft_sa(argm);
	if (argm->stacka[0] > argm->stacka[2])
		ft_ra(argm);
}

void	order5(t_stacks *argm)
{
	if (argm->stacka[0] > argm->stacka[1])
		ft_sa(argm);
	if (argm->stacka[0] > argm->stacka[2])
		ft_ra(argm);
}
