/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:53:21 by drahwanj          #+#    #+#             */
/*   Updated: 2024/12/14 15:41:49 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_order(t_Node **head)
{
	t_Node	*curr;

	curr = *head;
	while (curr != NULL && curr->next != NULL)
	{
		if (curr->data > curr->next->data)
		{
			return (0);
		}
		curr = curr->next;
	}
	return (1);
}
