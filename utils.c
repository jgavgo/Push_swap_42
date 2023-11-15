/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavilan <jgavilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 20:37:13 by jgavilan          #+#    #+#             */
/*   Updated: 2023/11/14 23:37:39 by jgavilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_stacks *argm)
{
	free(argm->stacka);
	free(argm->stackb);
	free(argm->stackaux);
	free(argm);
	return ;
}


void	ft_error(void)
{
	write (2, "Error\n", 6);
	exit (0);
}

int	ft_atoi(const char *str)
{
	long	num;
	int		sign;
	int		i;

	i = 0;
	num = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && ((str[i] >= '0' ) && (str[i] <= '9')))
	{
		num = num * 10 +(str[i] - 48);
		i++;
	}
	if (str[i] && (str[i] < '0' || str[i] > '9'))
		ft_error();
	if (num > INT_MAX)
		ft_error();
	return (num * sign);
}

static int	ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	valid_args(char **argv, int argc)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_strlen(argv[i]) > 11)
			ft_error();
		ft_atoi(argv[i]);
		i++;
	}
	return (1);
}

int	repeat_num(char **argv, int argc)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (0);
			else
				j++;
		}
		i++;
	}
	return (1);
}



