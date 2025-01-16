/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 19:28:32 by vsoares-          #+#    #+#             */
/*   Updated: 2025/01/16 19:38:48 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_stacks *stacks)
{
	pb(stacks);
}

int	main(int argc, char const *argv[])
{
	t_stacks	*stacks;

	stacks = malloc(sizeof(t_stacks));
	if (!stacks)
		error(stacks);
	if (argc == 1)
		return (0);
	stacks->size_b = 0;
	stacks->size_a = stack_len(argv, stacks);
	stacks->a = malloc(stacks->size_a * 4);
	stacks->b = malloc(stacks->size_a * 4);
	if (!stacks->a || !stacks->b)
		error(stacks);
	stack_init(stacks, argv);
	if (stack_dups(stacks->a, stacks->size_a))
		error(stacks);
	push_swap(stacks);
	clean(stacks);
	return (0);
}

void	clean(t_stacks *stacks)
{
	if (stacks)
	{
		if (stacks->a)
			free(stacks->a);
		if (stacks->b)
			free(stacks->b);
		free (stacks);
	}
}

void	error(t_stacks *stacks)
{
	clean(stacks);
	write(2, "Error\n", 6);
	exit(1);
}
