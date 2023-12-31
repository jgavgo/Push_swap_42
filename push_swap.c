/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavilan <jgavilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:06:15 by jgavilan          #+#    #+#             */
/*   Updated: 2023/11/14 23:21:23 by jgavilan         ###   ########.fr       */
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
	while (i < argm->lena)
	{
		while (iter < argm->len)
		{
			if (argm->stackaux[i] > argm->stackaux[iter])
				index++;
			iter++;
		}
		argm->stacka[i] = index;
		index = 0;
		iter = 0;
		i++;
	}
	return ;
}

void	fill_stacks(t_stacks *argm, int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		argm->stackaux[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	index_stacka(argm);
	argm->lena = argm->len;
	argm->lenb = 0;
	argm->memsolv = 0;
	if (!check_finish(argm))
		sel_solution(argm);
	return ;
}

void	sel_solution(t_stacks *argm)
{
	if (argm->len == 2 && argm->memsolv == 0)
		order2(argm);
	else if (argm->len == 3 && argm->memsolv == 0)
		order3(argm);
	else if (argm->len == 4 && argm->memsolv == 0)
		order4(argm);
	else if (argm->len == 5 && argm->memsolv == 0)
		order5(argm);
	else if (argm->len > 5 && argm->len <= 39 && argm->memsolv == 0)
		order_chunks(argm, 1);
	else if (argm->len < 100 && argm->len > 39 && argm->memsolv == 0)
		order_chunks(argm, 4);
	else if (argm->len >= 100 && argm->len <= 300 && argm->memsolv == 0)
		order_chunks(argm, 6);
	else if (argm->len > 300 && argm->memsolv == 0)
		order_chunks(argm, 10);
	if (!check_finish(argm))
		sel_solution(argm);
	return ;
}

int	ini_stacks(int argc, t_stacks *argm)
{
	argm->len = argc - 1;
	argm->lena = argm->len;
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
	// if (argc == 2)
	// 	ft_error();
	if (!valid_args(argv, argc))
		ft_error();
	if (!repeat_num(argv, argc))
		ft_error();
	argm = (t_stacks *)malloc(sizeof(t_stacks));
	if (!argm)
		return (0);
	if (!ini_stacks(argc, argm))
		ft_error();
	fill_stacks(argm, argc, argv);
	ft_free(argm);
	return (0);
}
