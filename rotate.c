/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavilan <jgavilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:06:59 by jgavilan          #+#    #+#             */
/*   Updated: 2023/10/03 23:21:57 by jgavilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stacks *argm)
{
	int	aux;
	int	count;

	count = 0;
	aux = argm->stacka[0];
	while (count++ < argm->lena)
		argm->stacka[count] = argm->stacka[count + 1];
	argm->stacka[argm->lena] = aux;
	write(1, "ra\n", 3);
}

void	ft_rb(t_stacks *argm)
{
	int	aux;
	int	count;

	count = 0;
	aux = argm->stackb[0];
	while (count++ < argm->lenb)
		argm->stackb[count] = argm->stackb[count + 1];
	argm->stackb[argm->lenb] = aux;
	write(1, "rb\n", 3);
}

void	ft_rr(t_stacks *argm)
{
	ft_ra(argm);
	ft_rb(argm);
	write(1, "rr\n", 3);
}
