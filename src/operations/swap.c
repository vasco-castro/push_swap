/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:26:07 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/15 20:47:56 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

static void	swap(int *stack, int size)
{
	int	temp;

	if (!stack || size < 2)
		return ;
	temp = stack[0];
	stack[0] = stack[1];
	stack[1] = temp;
}

void	sa(t_stacks *stacks)
{
	swap(stacks->a, stacks->size_a);
	write(1, "sa\n", 3);
}

void	sb(t_stacks *stacks)
{
	swap(stacks->b, stacks->size_b);
	write(1, "sb\n", 3);
}

void	ss(t_stacks *stacks)
{
	swap(stacks->a, stacks->size_a);
	swap(stacks->b, stacks->size_b);
	write(1, "ss\n", 3);
}
