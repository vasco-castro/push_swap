/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 19:28:32 by vsoares-          #+#    #+#             */
/*   Updated: 2025/01/13 21:33:56 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* void	push_swap(t_stacks stack_a)
{
	void (stack_a);
} */

int	main(int argc, char const *argv[])
{
	int	*stack_a;
	int	a_len;
	int	i;

	if (argc == 1)
		return (0);
	a_len = count_numbers(argv);
	printf("NUMBERS LENGTH: %d\n", a_len); //TODO: REMOVE THIS LATER
	stack_a = malloc(a_len * 4);
	if (!stack_a)
		error(); //TODO: Might not be be exit/error here, could be a return(1)!!
	init(stack_a, argv);

	i = 0;
	while(i < a_len)
	{
		printf("%d, ", stack_a[i]);
		i++;
	}

	free(stack_a);
	return (0);
}

void	error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
