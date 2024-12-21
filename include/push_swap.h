/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:43:06 by drahwanj          #+#    #+#             */
/*   Updated: 2024/12/19 22:31:06 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_printf/ft_printf.h"
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_node
{
	int				data;
	struct s_node	*next;
}	t_Node;

void	insert_end(t_Node **head, int value);
void	fill_list(t_Node **head, char **argv, int argc);
void	print_list(t_Node *head);
void	deallocate_list(t_Node **head);
int		ft_atol(const char *str, t_Node **head);
void	handle_error(t_Node **head);
int		check_order(t_Node **head);
void	sa(t_Node **head);
void	pb(t_Node **a, t_Node **b);
void	pa(t_Node **a, t_Node **b);
void	ra(t_Node **head);
void	rra(t_Node **head);
void	small_sort(t_Node **head, t_Node **b, int argc);
void	big_sort(t_Node **head, t_Node **b, int argc);
t_Node	*find_highest(t_Node **head);
t_Node	*find_smallest(t_Node **head);
void	quicksort_arr(int array[], int length);

#endif
