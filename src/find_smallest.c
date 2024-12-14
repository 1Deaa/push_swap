/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_smallest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 15:07:57 by drahwanj          #+#    #+#             */
/*   Updated: 2024/12/14 15:43:30 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_Node	*find_smallest(t_Node **head)
{
	t_Node	*smallest;
	t_Node	*curr;

	if (*head == NULL)
		return (NULL);
	smallest = *head;
	curr = (*head)->next;
	while (curr != NULL)
	{
		if (curr->data < smallest->data)
			smallest = curr;
		curr = curr->next;
	}
	return (smallest);
}
