/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugurel <muhammedtalhaugurel@gmai...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 04:27:57 by mugurel           #+#    #+#             */
/*   Updated: 2022/12/30 04:45:14 by mugurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_args(char **av, int ac)
{
	is_all_num(av, ac);
}

void	is_all_num(char **av, int ac)
{
	int32_t	i;
	int32_t	j;

	i = 1;
	j = 0;
	while (ac > i)
	{
		while (av[i][j])
		{
			if (av[i][j] != ' ')
			{
				if (!ft_isdigit(av[i][j]) && av[i][j] != '+' && av[i][j] != '-')
					handle_error("Error!!!\n");
				if (av[i][j] == '+' || av[i][j] == '-')
					if (!ft_isdigit(av[i][j + 1]))
						handle_error("Error!!!\n");
			}
			j++;
		}
		j = 0;
		i++;
	}
}

void	check_dup(t_stack *a, int32_t num)
{
	int32_t	i;

	i = 0;
	while (a->size > i)
	{
		if (a->stack[i] == num)
			handle_error("Error!!!\n");
		i++;
	}
}

void	handle_error(char *str)
{
	ft_putstr_fd(str, 2);
	exit(1);
}
