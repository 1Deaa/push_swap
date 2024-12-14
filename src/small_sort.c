/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:32:54 by drahwanj          #+#    #+#             */
/*   Updated: 2024/12/14 16:06:24 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_Node **head)
{
	while (check_order(head) != 1)
	{
		sa(head);
	}
}

void	sort_three(t_Node **head)
{
	t_Node	*highestnode;

	highestnode = find_highest(head);
	if (*head == highestnode)
		ra(head);
	else if ((*head)->next == highestnode)
		rra(head);
	if ((*head)->data > (*head)->next->data)
		sa(head);
}

void	sort_four(t_Node **head)
{
	t_Node	*b;
	t_Node	*smallestnode;

	b = NULL;
	smallestnode = find_smallest(head);
	if (*head == smallestnode)
		pb(head, &b);
	else if ((*head)->next == smallestnode)
	{
		ra(head);
		pb(head, &b);
	}
	else if ((*head)->next->next == smallestnode)
	{
		rra(head);
		rra(head);
		pb(head, &b);
	}
	else
	{
		rra(head);
		pb(head, &b);
	}
	sort_three(head);
	pa(head, &b);
}

void	small_sort(t_Node **head, int argc)
{
	if (argc == 3)
		sort_two(head);
	else if (argc == 4)
		sort_three(head);
	else if (argc == 5)
		sort_four(head);
}
