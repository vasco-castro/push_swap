/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 19:28:48 by vsoares-          #+#    #+#             */
/*   Updated: 2025/10/25 13:45:21 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../lib/libft/include/libft.h"
# include "operations.h"

int		stack_len(const char *argv[], t_stacks *stacks);
void	stack_init(t_stacks *stacks, const char *argv[]);
int		stack_dups(int *stack, int size);
void	error(t_stacks *stacks);
void	clean(t_stacks *stacks);

#endif