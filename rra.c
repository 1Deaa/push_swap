/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 18:06:22 by drahwanj          #+#    #+#             */
/*   Updated: 2024/12/11 18:06:23 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rra(t_Node **head)
{
    t_Node  *second_last;
    t_Node  *last;
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