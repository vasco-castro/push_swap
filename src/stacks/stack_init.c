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

/*
 * @brief Based on my "int ft_atoi(const char *str);",
 * but with overflow detection.
 */
static int	ft_atoi_no_of(const char *str, t_stacks *stacks)
{
	size_t	i;
	long	nb;
	int		sign;

	i = 0;
	sign = 1;
	nb = 0;
	while (ft_isspace(str[i]))
		i++;
	if (ft_issign(str[i]) != 0)
		sign *= ft_issign(str[i++]);
	while (ft_isdigit(str[i]) && nb <= INT_MAX)
	{
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	nb *= sign;
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
				stacks->a[nbs++] = ft_atoi_no_of(&argv[i][j], stacks);
			j++;
		}
		i++;
	}
}
