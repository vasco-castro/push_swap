/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 20:45:58 by vsoares-          #+#    #+#             */
/*   Updated: 2025/01/13 18:26:54 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
static int is_digit(int c)
{
	return(c > '0' && c < '9');
}

static int is_space(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}

static int	is_signal(int c)
{
	if (c == '+')
		return (1);
	else if (c == '-')
		return (-1);
	else
		return (0);
}

static int	ft_atoi(const char *str)
{
	size_t			i;
	unsigned long	nb;
	int				signal;

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
	return (nb * signal);
}

void init(int *stack_a, const int argc, const char *argv[])
{
	int i;
	int j;
	char *start;

	i = 1;
	start = NULL;
	while(argv[i])
	{
		j = 0;
		while(argv[i][j])
		{

			if(!is_digit(argv[i][j]) && !is_space(argv[i][j]))
				error();
			else if(is_digit(argv[i][j]) && !is_digit(argv[i][j-1]))
				start = &argv[i][j];

			// if (start && )
			j++;
		}
		i++;
	}
}
