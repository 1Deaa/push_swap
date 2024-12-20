/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:59:08 by drahwanj          #+#    #+#             */
/*   Updated: 2024/12/14 15:44:44 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_Node	*head;
	t_Node	*b;

	b = NULL;
	head = NULL;
	fill_list(&head, argv, argc);
	if (check_order(&head) == 1 || argc < 3)
	{
		deallocate_list(&head);
		return (0);
	}
	if (argc < 6)
	{
		small_sort(&head, &b, argc);
		//print_list(head);
		deallocate_list(&head);
		return (0);
	}
	big_sort(&head, &b, argc);
	//print_list(head);
	deallocate_list(&head);
}
