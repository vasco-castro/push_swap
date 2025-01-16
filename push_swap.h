/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 19:28:48 by vsoares-          #+#    #+#             */
/*   Updated: 2025/01/16 19:00:05 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>
# include <limits.h>
# include "operations/operations.h"

int		stack_len(const char *argv[], t_stacks *stacks);
void	stack_init(t_stacks *stacks, const char *argv[]);
int		stack_dups(int *stack, int size);
void	error(t_stacks *stacks);
void	clean(t_stacks *stacks);

#endif