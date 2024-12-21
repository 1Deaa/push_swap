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

static void	quick_fill_sort(t_Node **head, int *array, int argc)
{
	t_Node	*loop;
	int		i;

	i = 0;
	loop = *head;
	while (loop != NULL)
	{
		array[i] = loop->data;
		loop = loop->next;
		i++;
	}
	quicksort_arr(array, argc - 1);
}

int	search_array(int *array, int target, int start, int end)
{
	int	i;

	i = start;
	while (i <= end)
	{
		if (target == array[i])
			return (1);
		i++;
	}
	return (0);
}

void	big_sort(t_Node **head, t_Node **b, int argc)
{
	int		*array;
	int	partition_size;
	int	i;
	int push_count;

	(void)b;
	push_count = 0;
	i = 0;
	partition_size = (argc - 1) / 5; // argc = 25 -> part = 5
	
	quick_fill_sort(head, array, argc);
	while (*head)
	{
		if (i == partition_size - 1)
			partition_size += partition_size;
		if (search_array(array, (*head)->data, i, partition_size - 1))
		{
			pb(head, b); // how many I pushed compare with partition_size
			push_count++;
		}
		ra(head);
	}
}
