/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavilan <jgavilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:06:15 by jgavilan          #+#    #+#             */
/*   Updated: 2023/09/26 22:49:43 by jgavilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ini_stacks(int argc, t_struct *argm)
{
	argm->len = argc - 1;
	argm->lena = argc -1;
	argm->lenb = 0;
	argm->stacka = (int *)malloc(sizeof(int) * (argc - 1));
	if (!argm->stacka)
	{
		free (argm);
		return (0);
	}
	argm->stackb = (int *)malloc(sizeof(int) * (argc - 1));
	if (!argm->stackb)
	{
		free(argm->stacka);
		free(argm);
		return (0);
	}
	argm->stackaux = (int *)malloc(sizeof(int) * (argc - 1));
	if (!argm->stackaux)
	{
		free(argm->stacka);
		free(argm->stackb);
		free(argm);
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_struct	*argm;

	if (argc == 1)
		return (0);
	argm = (t_struct *)malloc(sizeof(t_struct));
	if (!argm)
		return (0);
	if (!ini_stacks(argc, argm))
		ft_error();
}