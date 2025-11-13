/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 19:45:53 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/13 19:46:06 by vsoares-         ###   ########.fr       */
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
