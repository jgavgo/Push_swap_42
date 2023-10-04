/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solutions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavilan <jgavilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:27:08 by jgavilan          #+#    #+#             */
/*   Updated: 2023/10/04 22:54:13 by jgavilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	order2(t_stacks *argm)
{
	if (argm->stacka[0] > argm->stacka[1])
		ft_sa(argm);
	return ;
}

void	order3(t_stacks *argm)
{
	int	i;

	i = 1;
	printf("primer numero %i \n", argm->stacka[0]);
	printf("segundo numero %i \n", argm->stacka[1]);
	printf("tercer numero %i\n", argm->stacka[2]);
	while (argm->stacka[i] != 2)
		i++;
	if (i == 1)
		ft_rra(argm);
	if (i == 0)
		ft_ra(argm);
	if (argm->stacka[0] > argm->stacka[1])
		ft_sa(argm);
	printf("primer numero %i \n", argm->stacka[0]);
	printf("segundo numero %i \n", argm->stacka[1]);
	printf("tercer numero %i\n", argm->stacka[2]);
	return ;
}

void	order4(t_stacks *argm)
{
	if (argm->stacka[0] > argm->stacka[1])
		ft_sa(argm);
	if (argm->stacka[0] > argm->stacka[2])
		ft_ra(argm);
	return ;
}

void	order5(t_stacks *argm)
{
	if (argm->stacka[0] > argm->stacka[1])
		ft_sa(argm);
	if (argm->stacka[0] > argm->stacka[2])
		ft_ra(argm);
	return ;
}
