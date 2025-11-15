/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 19:45:53 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/15 17:59:05 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"
#include <stddef.h>

void	indexing(t_stacks *s)
{

	int		i;
	int		j;
	int		k;
	int		*new_a;

	new_a = malloc(s->size_a * sizeof * new_a);
	if (new_a == NULL)
		error(s);
	i = -1;
	while (++i < s->size_a)
	{
		k = 0;
		j = -1;
		while (++j < s->size_a)
			if (s->a[i] > s->a[j])
				k++;
		new_a[i] = k;
	}
	i = s->size_a;
	while (i--)
		s->a[i] = new_a[i];
	free(new_a);
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
