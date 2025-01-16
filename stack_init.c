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

#include "push_swap.h"

static int	is_digit(int c)
{
	return (c > '0' && c < '9');
}

static int	is_space(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

/* Returns positive integer if signal is positive,
 negative if is negative and 0 if is not a signal char */
static int	is_signal(int c)
{
	if (c == '+')
		return (1);
	else if (c == '-')
		return (-1);
	return (0);
}

static int	ft_atoi(const char *str, t_stacks *stacks)
{
	size_t	i;
	long	nb;
	int		signal;

	i = 0;
	signal = 1;
	nb = 0;
	while (is_space(str[i]))
		i++;
	if (is_signal(str[i]) != 0)
		signal *= is_signal(str[i++]);
	while (is_digit(str[i]) && nb <= INT_MAX)
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
			if ((is_digit(argv[i][j]) || (is_signal(argv[i][j]) != 0))
				&&
				(!is_digit(argv[i][j - 1]) && (is_signal(argv[i][j - 1]) == 0)))
				stacks->a[nbs++] = ft_atoi(&argv[i][j], stacks);
			j++;
		}
		i++;
	}
}
