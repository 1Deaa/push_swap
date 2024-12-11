/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 17:55:31 by drahwanj          #+#    #+#             */
/*   Updated: 2024/12/11 17:55:31 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ra(t_Node **head)
{
    t_Node  *first;
    t_Node  *last;

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