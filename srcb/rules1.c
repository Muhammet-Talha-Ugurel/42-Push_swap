/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugurel <muhammedtalhaugurel@gmai...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 04:27:57 by mugurel           #+#    #+#             */
/*   Updated: 2022/12/30 04:45:14 by mugurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ra(t_stack *a)
{
	int	temp;

	if (a->size != 0)
	{
		temp = a->stack[0];
		move_down(a);
		a->stack[a->size - 1] = temp;
	}
}

void	rb(t_stack *b)
{
	int	temp;

	if (b->size != 0)
	{
		temp = b->stack[0];
		move_down(b);
		b->stack[b->size - 1] = temp;
	}
}

void	rr(t_stack *a, t_stack *b)
{
	int	temp;

	if (a->size != 0)
	{
		temp = a->stack[0];
		move_down(a);
		a->stack[a->size - 1] = temp;
	}
	if (b->size != 0)
	{
		temp = b->stack[0];
		move_down(b);
		b->stack[b->size - 1] = temp;
	}
}

void	rra(t_stack *a)
{
	int	temp;

	if (a->size != 0)
	{
		temp = a->stack[a->size - 1];
		move_up(a);
		a->stack[0] = temp;
	}
}

void	rrb(t_stack *b)
{
	int	temp;

	if (b->size != 0)
	{
		temp = b->stack[b->size - 1];
		move_up(b);
		b->stack[0] = temp;
	}
}
