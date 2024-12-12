/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_highest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:40:54 by drahwanj          #+#    #+#             */
/*   Updated: 2024/12/11 17:40:55 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_Node  *find_highest(t_Node **head)
{
    t_Node *highest;
    t_Node *curr;

    if (*head == NULL)
        return NULL;
    highest = *head;
    curr = (*head)->next;
    while (curr != NULL)
    {
        if (curr->data > highest->data)
            highest = curr;
        curr = curr->next;
    }
    return (highest);
}
