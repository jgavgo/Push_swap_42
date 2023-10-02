/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavilan <jgavilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:06:59 by jgavilan          #+#    #+#             */
/*   Updated: 2023/10/03 00:01:34 by jgavilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stacks *argm)
{
	int	aux;
	int	lena;

	lena = argm->lena;
	aux = argm->stacka[0];
	while (lena-- > 0)
		argm->stacka[lena] = argm->stacka[lena - 1];
	argm->stacka[lena] = aux;
	write(1, "ra", 2);
}

void	ft_rb()
{
	
}

void	ft_rr()
{
	
}
