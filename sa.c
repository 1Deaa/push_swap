/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:16:51 by drahwanj          #+#    #+#             */
/*   Updated: 2024/12/11 16:16:52 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sa(t_Node **head)
{
    t_Node  *first;
    t_Node  *second;

    first = *head;
    second = (*head)->next;
    if (*head == NULL || (*head)->next == NULL)
        return ;
    first->next = second->next;
    second->next = first;
    *head = second;
    write(1, "sa\n", 3);
}