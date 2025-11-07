/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tree.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:29:35 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/07 16:29:37 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

// TODO: If radix_sort is used, need to change sort_tree to use indexes instead!
void	sort_tree(t_stacks *stacks)
{
	if (stacks->a[2] < stacks->a[1] || stacks->a[2] < stacks->a[0])
	{
		if (stacks->a[0] > stacks->a[1] && stacks->a[0] > stacks->a[2])
			ra(stacks);
		else
			rra(stacks);
	}
	if (stacks->a[0] > stacks->a[1])
		sa(stacks);
}

bool	is_sorted(t_stacks *stacks)
{
	int	i;

	if (stacks->size_b != 0)
		return (false);
	if (stacks->size_a <= 1)
		return (true);
	i = 0;
	while (i < stacks->size_a - 1)
	{
		if (stacks->a[i] > stacks->a[i + 1])
			return (false);
		i++;
	}
	return (true);
}
