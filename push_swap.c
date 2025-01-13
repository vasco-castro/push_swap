/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 19:28:32 by vsoares-          #+#    #+#             */
/*   Updated: 2025/01/13 18:29:44 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void push_swap()
// {

// }


int main(int argc, char const *argv[])
{
	int *stack_a;
	int a_len;
	int i;

	if (argc == 1)
		return(0);
	a_len = count_numbers(argc, argv);
	printf("NUMBERS LENGTH: %d\n", a_len); //TODO: REMOVE THIS LATER
	stack_a = malloc(a_len * 4);
	if (!stack_a)
		error(); //TODO: Might not be be exit/error here, could be a return(1)!!
	// init(stack_a, argc, argv);

	i = 0;
	// while(i < a_len)
	// {
	// 	printf("%d\n", stack_a[i]);
	// }

	free(stack_a);
	return(0);
}

void error()
{
	write(2, "Error\n", 6);
	exit(1);
}
