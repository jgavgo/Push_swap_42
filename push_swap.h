/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgavilan <jgavilan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:06:18 by jgavilan          #+#    #+#             */
/*   Updated: 2023/09/13 20:19:15 by jgavilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_element{
	int	value;
	int	index;
}	t_element;

typedef struct s_stack{
	t_element	**array;
	int			len;
}	t_stack;

typedef struct s_game{
	t_stack	stack_a;
	t_stack	stack_b;
	int		chunks;
}	t_game;

#endif