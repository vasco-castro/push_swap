/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:25:55 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/15 20:47:51 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	rrotate(int *stack, int size)
{
	int	temp;

	if (size < 2)
		return ;
	temp = stack[size - 1];
	shift_down(stack, size);
	stack[0] = temp;
}

void	rra(t_stacks *stacks)
{
	rrotate(stacks->a, stacks->size_a);
	write(1, "rra\n", 4);
}

void	rrb(t_stacks *stacks)
{
	rrotate(stacks->b, stacks->size_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stacks *stacks)
{
	rrotate(stacks->a, stacks->size_a);
	rrotate(stacks->b, stacks->size_b);
	write(1, "rrr\n", 4);
}
