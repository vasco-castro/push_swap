/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:26:05 by vsoares-          #+#    #+#             */
/*   Updated: 2025/10/25 14:16:13 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	rotate(int *stack, int size)
{
	int	first;

	if (!stack || !stack[0] || size < 2)
		return ;
	first = stack[0];
	shift_up(stack, size);
	stack[size - 1] = first;
}

void	ra(t_stacks *stacks)
{
	rotate(stacks->a, stacks->size_a);
	write(1, "ra\n", 3);
}

void	rb(t_stacks *stacks)
{
	rotate(stacks->b, stacks->size_b);
	write(1, "rb\n", 3);
}

void	rr(t_stacks *stacks)
{
	rotate(stacks->a, stacks->size_a);
	rotate(stacks->b, stacks->size_b);
	write(1, "rr\n", 3);
}
