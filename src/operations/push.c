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

#include "../../include/push_swap.h"

static void	push(int *src_stack, int *src_size, int *dst_stack, int *dst_size)
{
	int	src_first;

	if (*src_size == 0)
		return ;
	src_first = src_stack[0];
	shift_up(src_stack, *src_size);
	(*src_size)--;
	shift_down(dst_stack, *dst_size);
	dst_stack[0] = src_first;
	(*dst_size)++;
}

void	pa(t_stacks *stacks)
{
	push(stacks->b, &(stacks->size_b), stacks->a, &(stacks->size_a));
	write(1, "pa\n", 3);
}

void	pb(t_stacks *stacks)
{
	push(stacks->a, &(stacks->size_a), stacks->b, &(stacks->size_b));
	write(1, "pb\n", 3);
}
