/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 19:49:35 by drahwanj          #+#    #+#             */
/*   Updated: 2024/12/19 22:33:28 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	big_sort(t_Node **head, t_Node **b)
{
	int	smallest;

	smallest = 0;
	while (*head)
	{
		smallest = (find_smallest(head))->data;
		while ((*head)->data != smallest)
			rra(head);
		pb(head, b);
	}
	while (*b)
		pa(head, b);
}
