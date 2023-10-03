/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavilan <jgavilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:06:15 by jgavilan          #+#    #+#             */
/*   Updated: 2023/10/04 00:13:17 by jgavilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	index_stacka(t_stacks *argm)
{
	int	i;
	int	index;
	int	iter;

	i = 0;
	iter = 0;
	index = 0;
	argm->lena = argm->len;
	while (i++ < argm->lena)
	{
		while (iter++ <= argm->len)
		{
			if (argm->stackaux[i] > argm->stackaux[iter])
				index++;
		}
		argm->stacka[i] = index;
		index = 0;
		iter = 0;
	}
}

void	fill_stacks(t_stacks *argm, int argc, char **argv)
{
	int	i;

	i = 1;
	argm->len = argc - 1;
	while (i++ <= argc)
		argm->stackaux[i - 1] = ft_atoi(argv[i]);
	index_stacka(argm);
	argm->lena = argm->len;
	argm->lenb = 0;
	sel_solution(argm);
}

void	sel_solution(t_stacks *argm)
{
	if (argm->len == 2)
		order2(argm);
	if (argm->len == 3)
		order3(argm);
	if (argm->len == 4)
		order4(argm);
	if (argm->len == 5)
		order5(argm);
}

int	ini_stacks(int argc, t_stacks *argm)
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
	t_stacks	*argm;
	int			i;

	i = 0;
	if (argc == 1)
		return (0);
	if (!valid_args(argv, argc))
		ft_error();
	if (!repeat_num(argv, argc))
		ft_error();
	argm = (t_stacks *)malloc(sizeof(t_stacks));
	if (!argm)
		return (0);
	if (!ini_stacks(argc, argm))
		ft_error();
	sel_solution(argm);
	ft_free(argm);
	return (0);
}
