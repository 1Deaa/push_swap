/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:32:54 by drahwanj          #+#    #+#             */
/*   Updated: 2024/12/11 15:32:55 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort_two(t_Node **head)
{
    while (check_order(head) != 1)
    {
        sa(head);
    }
}

void    sort_three(t_Node **head)
{
    t_Node  *highestnode;

    highestnode = find_highest(head);
    if (*head == highestnode)
        ra(head);
    else if ((*head)->next == highestnode)
        rra(head);
    if ((*head)->data > (*head)->next->data)
        sa(head);
}

void    small_sort(t_Node **head, int argc)
{
    if (argc == 3)
        sort_two(head);
    else if (argc == 4)
        sort_three(head);
    /*else if (argc == 5)
        sort_four(head);
    else if (argc == 6)
        sort_five(head);*/
}