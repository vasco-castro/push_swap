/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:25:55 by vsoares-          #+#    #+#             */
/*   Updated: 2025/01/16 17:36:54 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

static void	rrotate(int *stack)
{
	(void)stack;
}

void	rra(t_stacks *stacks)
{
	rrotate(stacks->a);
	write(1, "rra\n", 4);
}

void	rrb(t_stacks *stacks)
{
	rrotate(stacks->b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stacks *stacks)
{
	rrotate(stacks->a);
	rrotate(stacks->b);
	write(1, "rrr\n", 4);
}
