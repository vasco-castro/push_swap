/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_len.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 20:44:44 by vsoares-          #+#    #+#             */
/*   Updated: 2025/01/16 19:38:36 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	stack_len(const char *argv[], t_stacks *stacks)
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
			if (!ft_isdigit(argv[i][j]) && !ft_isspace(argv[i][j])
				&& !ft_issign(argv[i][j]))
				error(stacks);
			else if (ft_isdigit(argv[i][j]) && !(ft_isdigit(argv[i][j - 1])))
				nbrs++;
			j++;
		}
		i++;
	}
	return (nbrs);
}
