/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 15:24:48 by vsoares-          #+#    #+#             */
/*   Updated: 2025/01/09 15:24:49 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "operations.h"

static void	push(int *src_stack, int *dst_stack)
{
	int nb;
	int nb2;

	nb = src_stack[0];
	nb2 = dst_stack[0];
	return ;
}

void	pa(t_stacks *stacks)
{
	push(stacks->b, stacks->a);
	write(1, "pa\n", 3);
}

void	pb(t_stacks *stacks)
{
	push(stacks->a, stacks->b);
	write(1, "pb\n", 3);
}
