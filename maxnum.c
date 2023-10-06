/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maxnum.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavilan <jgavilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 00:03:47 by jgavilan          #+#    #+#             */
/*   Updated: 2023/10/07 00:53:27 by jgavilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ordermax(t_stacks *argm)
{
	int	num_chunck;
	int	i;
	int	j;
	int count;

	num_chunck = 1;
	i = 0;
	if (argm->len < 100 && argm->len > 39)
		num_chunck = 4;
	else if (argm->len >= 100 && argm->len <= 300)
		num_chunck = 6;
	else if (argm->len > 300)
		num_chunck = 10;
	j = 1;
	while (argm->stacka[i] < argm->lena)
	{
		if (j == 1)
			count = ((argm->len / num_chunck) * j + (argm->len % num_chunck));
		else if(j != 1)
			count = (argm->len / num_chunck) * j;
		order_chunks(argm, count, j);
		j++;
	}
	check_finish(argm);
}

void	order_chunks(t_stacks argm, int count, int j)
{
	int	i;
	int	j;

	i = 0;
	if (j == 1)
	{
		while (i <= count)
		{
			if (count)
				i++;
		}
	}
}
