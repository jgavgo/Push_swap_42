/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavilan <jgavilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 21:10:00 by jgavilan          #+#    #+#             */
/*   Updated: 2023/10/06 22:51:46 by jgavilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stacks *argm)
{
	int	aux;
	int	lena;

	lena = argm->lena - 1;
	aux = argm->stacka[lena];
	while (lena > 0)
	{
		argm->stacka[lena] = argm->stacka[lena - 1];
		lena--;
	}
	argm->stacka[0] = aux;
	write(1, "rra\n", 4);
	return ;
}

void	ft_rrb(t_stacks *argm)
{
	int	aux;
	int	lenb;

	lenb = argm->lenb - 1;
	aux = argm->stackb[lenb];
	while (lenb > 0)
	{
		argm->stackb[lenb] = argm->stackb[lenb - 1];
		lenb--;
	}
	argm->stackb[0] = aux;
	write(1, "rrb\n", 4);
	return ;
}

void	ft_rrr(t_stacks *argm)
{
	ft_rra(argm);
	ft_rrb(argm);
	write(1, "rrr\n", 4);
	return ;
}

