/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:29:35 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/15 19:03:58 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	sort3(t_stacks *s)
{
	if (s->a[2] != 2)
	{
		if (s->a[0] == 2)
			ra(s);
		else
			rra(s);
	}
	if (s->a[0] > s->a[1])
		sa(s);
}

void	sort5(t_stacks *s)
{
	while (s->size_b <= 1)
	{
		if (s->a[0] == 0 || s->a[0] == 1)
			pb(s);
		else
			ra(s);
		debug_stacks(s);
	}
	if (s->b[0] == 0)
		sb(s);
	if (s->a[2] != 4)
	{
		if (s->a[0] == 4)
			ra(s);
		else
			ra(s);
	}
	if (s->a[0] > s->a[1])
		sa(s);
	pa(s);
	pa(s);
}

void	radixb(t_stacks *s)
{
	int	i;
	int	j;

	i = 0;
	while (s->size_b)
	{
		pa(s);
		i++;
	}
	debug_stacks(s);
}

void	radix(t_stacks *s)
{
	int	i;
	int	j;
	int	size;
	int	max_bits;

	max_bits = 0;
	while (((s->size_a - 1) >> max_bits) != 0) ++max_bits;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		size = s->size_a;
		while (j < size)
		{
			if (s->a[0] >> i & 1)
			{
				ft_printf("%d - bit[%d] = 1\n", s->a[0], i);
				ra(s);
			}
			else
			{
				ft_printf("%d - bit[%d] = 0\n", s->a[0], i);
				pb(s);
			}
			j++;
		}
		debug_stacks(s);
		radixb(s);
		i++;
	}
}
