/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 20:44:44 by vsoares-          #+#    #+#             */
/*   Updated: 2025/01/13 22:17:55 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_digit(int c)
{
	return (c > '0' && c < '9');
}

static int	is_space(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

static int	is_signal(int c)
{
	return (c == '+' || c == '-');
}

int	count_numbers(const char *argv[])
{
	int	i;
	int	j;
	int	nbrs;

	i = 1;
	nbrs = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (!is_digit(argv[i][j]) && !is_space(argv[i][j])
				&& !is_signal(argv[i][j]))
				error();
			else if (is_digit(argv[i][j]) && !(is_digit(argv[i][j - 1])))
				nbrs++;
			j++;
		}
		i++;
	}
	return (nbrs);
}
