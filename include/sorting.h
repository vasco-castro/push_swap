/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsoares- <vsoares-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 03:02:43 by vsoares-          #+#    #+#             */
/*   Updated: 2025/11/15 18:20:42 by vsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORTING_H
# define SORTING_H

# include "push_swap.h"

void	sort3(t_stacks *stacks);
void	sort5(t_stacks *stacks);
void	radix(t_stacks *stacks);

bool	is_sorted(t_stacks *stacks);
void	indexing(t_stacks *s);

#endif