/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_len.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 20:44:44 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/17 15:07:11 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	validate_digits(char c, t_stacks *stacks)
{
	if (!ft_isdigit(c) && !ft_isspace(c) && !ft_issign(c))
		error(stacks);
}

bool	parse_digits(const char c1, const char c2, t_stacks *stacks)
{
	if (!ft_isspace(c1) && ft_issign(c2))
		error(stacks);
	if (ft_issign(c1) && !ft_isdigit(c2))
		error(stacks);
	if (ft_isspace(c1) && ft_isspace(c2))
		error(stacks);
	if (ft_isdigit(c1) && !(ft_isdigit(c2)))
		return (true);
	return (false);
}

int	stack_len(t_stacks *stacks, char *argv[])
{
	int	i;
	int	j;
	int	nbrs;

	i = 1;
	nbrs = 0;
	while (argv[i])
	{
		if (!argv[i] || !argv[i][0])
			error(stacks);
		j = 0;
		while (argv[i][j])
		{
			validate_digits(argv[i][j], stacks);
			nbrs += parse_digits(argv[i][j], argv[i][j + 1], stacks);
			j++;
		}
		i++;
	}
	return (nbrs);
}
