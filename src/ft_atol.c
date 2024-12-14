/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:45:32 by drahwanj          #+#    #+#             */
/*   Updated: 2024/12/14 16:01:14 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_atol_handle(const char *str, t_Node **head, int sign, long result)
{
	if (sign == 1 && (result > ((INT_MAX) - (*str - '0')) / 10))
		handle_error(head);
	if (sign == -1 && (result > ((-(long)INT_MIN) - (*str - '0')) / 10))
		handle_error(head);
}

int	ft_atol(const char *str, t_Node **head)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
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
		ft_atol_handle(str, head, sign, result);
		result = result * 10 + (*str - '0');
		str++;
	}
	if (*str != '\0')
		handle_error(head);
	return (sign * result);
}
