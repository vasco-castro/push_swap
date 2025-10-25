/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 20:45:58 by vsoares-          #+#    #+#             */
/*   Updated: 2025/01/16 17:15:49 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

// TODO: Check if it's really needed to use this atoi. It's validating overflow!
static int	ft_atoi2(const char *str, t_stacks *stacks)
{
	size_t	i;
	long	nb;
	int		signal;

	i = 0;
	signal = 1;
	nb = 0;
	while (ft_isspace(str[i]))
		i++;
	if (ft_issign(str[i]) != 0)
		signal *= ft_issign(str[i++]);
	while (ft_isdigit(str[i]) && nb <= INT_MAX)
	{
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	nb *= signal;
	if (nb > INT_MAX || nb < INT_MIN)
		error(stacks);
	return (nb);
}

void	stack_init(t_stacks *stacks, const char *argv[])
{
	int	i;
	int	j;
	int	nbs;

	i = 1;
	nbs = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((ft_isdigit(argv[i][j]) || (ft_issign(argv[i][j]) != 0))
				&& (!ft_isdigit(argv[i][j - 1])
					&& (ft_issign(argv[i][j - 1]) == 0)))
				stacks->a[nbs++] = ft_atoi2(&argv[i][j], stacks);
			j++;
		}
		i++;
	}
}
