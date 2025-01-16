/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:26:05 by vsoares-          #+#    #+#             */
/*   Updated: 2025/01/16 17:36:49 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

static void	rotate(int *stack)
{
	(void)stack;
}

void	ra(t_stacks *stacks)
{
	rotate(stacks->a);
	write(1, "ra\n", 3);
}

void	rb(t_stacks *stacks)
{
	rotate(stacks->b);
	write(1, "rb\n", 3);
}

void	rr(t_stacks *stacks)
{
	rotate(stacks->a);
	rotate(stacks->b);
	write(1, "rr\n", 3);
}
