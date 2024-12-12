/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:45:32 by drahwanj          #+#    #+#             */
/*   Updated: 2024/12/10 17:45:45 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "limits.h"

int    ft_atol(const char *str, t_Node **head)
{
    long result = 0;
    int sign = 1;

    while (*str == ' ' || *str == '\t' || *str == '\n')
        str++;
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    else if (*str == '+')
        str++;
    while (*str >= '0' && *str <= '9')
    {
        if (sign == 1 && (result > ((INT_MAX) - (*str - '0')) / 10))
            handle_error(head);
        if (sign == -1 && (result > ((2147483648) - (*str - '0'))/ 10))
            handle_error(head);
        result = result * 10 + (*str - '0');
        str++;
    }
    if (*str != '\0')
        handle_error(head);
    return (sign * result);
}