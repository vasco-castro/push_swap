/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 19:28:32 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/15 18:47:39 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	debug_stacks(t_stacks *stacks)
{
	int	i;

	i = 0;
	ft_printf(CYAN"A(%d)\tB(%d)\n"RESET, stacks->size_a, stacks->size_b);
	ft_printf(CYAN"---------\n"RESET);
	while (i < stacks->size_a || i < stacks->size_b)
	{
		if (i < stacks->size_a)
			ft_printf(YELLOW"%d", stacks->a[i]);
		ft_printf("\t");
		if (i < stacks->size_b)
			ft_printf(YELLOW"%d", stacks->b[i]);
		ft_printf("\n"RESET);
		i++;
	}
	ft_printf(CYAN"---------\n"RESET);
}

void	push_swap(t_stacks *s)
{
	debug_stacks(s);
	if (is_sorted(s))
		return ;
	else if (s->size_a == 2)
		sa(s);
	else if (s->size_a == 3)
		sort3(s);
	else if (s->size_a == 5)
		sort5(s);
	else
		radix(s);
	debug_stacks(s);
}

int	main(int argc, char const *argv[])
{
	t_stacks	*stacks;

	stacks = malloc(sizeof(t_stacks));
	if (!stacks)
		error(stacks);
	stacks->size_b = 0;
	stacks->size_a = stack_len(argv, stacks);
	stacks->a = malloc(stacks->size_a * sizeof(int));
	stacks->b = malloc(stacks->size_a * sizeof(int));
	if (!stacks->a || !stacks->b)
		error(stacks);
	stack_init(stacks, argv);
	if (stack_dups(stacks->a, stacks->size_a))
		error(stacks);
	indexing(stacks);
	push_swap(stacks);
	clean(stacks);
	return (0);
}
