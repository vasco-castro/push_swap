/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:26:07 by vsoares-          #+#    #+#             */
/*   Updated: 2025/01/16 17:37:04 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

static void	swap(int *stack)
{
	(void)stack;
}

void	sa(t_stacks *stacks)
{
	swap(stacks->a);
	write(1, "sa\n", 3);
}

void	sb(t_stacks *stacks)
{
	swap(stacks->b);
	write(1, "sb\n", 3);
}

void	ss(t_stacks *stacks)
{
	swap(stacks->a);
	swap(stacks->b);
	write(1, "ss\n", 3);
}
