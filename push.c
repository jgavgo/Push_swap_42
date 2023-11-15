/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavilan <jgavilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:06:54 by jgavilan          #+#    #+#             */
/*   Updated: 2023/11/14 22:59:19 by jgavilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stacks *argm)
{
	int	aux;

	aux = argm->stacka[0];
	argm->stacka[0] = argm->stacka[1];
	argm->stacka[1] = aux;
	write(1, "sa\n", 3);
	return ;
}

void	ft_sb(t_stacks *argm)
{
	int	aux;

	aux = argm->stackb[0];
	argm->stackb[0] = argm->stackb[1];
	argm->stackb[1] = aux;
	write(1, "sb\n", 3);
	return ;
}

void	ft_ss(t_stacks *argm)
{
	ft_sa(argm);
	ft_sb(argm);
	write(1, "ss\n", 3);
	return ;
}

void	ft_pa(t_stacks *argm)
{
	int	lena;
	int	lenb;

	lena = argm->lena;
	lenb = 0;
	while (lena > 0)
	{
		argm->stacka[lena] = argm->stacka[lena - 1];
		lena--;
	}
	argm->stacka[0] = argm->stackb[0];
	while (lenb < argm->lenb - 1)
	{
		argm->stackb[lenb] = argm->stackb[lenb + 1];
		lenb++;
	}
	write (1, "pa\n", 3);
	argm->lena++;
	argm->lenb--;
	return ;
}

void	ft_pb(t_stacks *argm)
{
	int	lena;
	int	lenb;

	lena = 0;
	lenb = argm->lenb;
	while (lenb > 0)
	{
		argm->stackb[lenb] = argm->stackb[lenb - 1];
		lenb--;
	}
	argm->stackb[0] = argm->stacka[0];
	while (lena < argm->lena - 1)
	{
		argm->stacka[lena] = argm->stacka[lena + 1];
		lena++;
	}
	write (1, "pb\n", 3);
	argm->lena--;
	argm->lenb++;
}
