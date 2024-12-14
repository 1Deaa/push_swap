/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_util.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:01:57 by drahwanj          #+#    #+#             */
/*   Updated: 2024/12/14 15:49:13 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_Node **head)
{
	t_Node	*first;
	t_Node	*second;

	first = *head;
	second = (*head)->next;
	if (*head == NULL || (*head)->next == NULL)
		return ;
	first->next = second->next;
	second->next = first;
	*head = second;
	write(1, "sa\n", 3);
}

void	rra(t_Node **head)
{
	t_Node	*second_last;
	t_Node	*last;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	second_last = NULL;
	last = *head;
	while (last->next != NULL)
	{
		second_last = last;
		last = last->next;
	}
	second_last->next = NULL;
	last->next = *head;
	*head = last;
	write(1, "rra\n", 4);
}

void	ra(t_Node **head)
{
	t_Node	*first;
	t_Node	*last;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	first = *head;
	last = *head;
	while (last->next != NULL)
		last = last->next;
	*head = first->next;
	last->next = first;
	first->next = NULL;
	write(1, "ra\n", 3);
}

void	pb(t_Node **a, t_Node **b)
{
	t_Node	*temp;

	if (*a == NULL)
		return ;
	temp = *a;
	*a = (*a)->next;
	temp->next = *b;
	*b = temp;
	write(1, "pb\n", 3);
}

void	pa(t_Node **a, t_Node **b)
{
	t_Node	*temp;

	if (*b == NULL)
		return ;
	temp = *b;
	*b = (*b)->next;
	temp->next = *a;
	*a = temp;
	write(1, "pa\n", 3);
}
