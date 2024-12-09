/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:59:08 by drahwanj          #+#    #+#             */
/*   Updated: 2024/12/09 19:58:51 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_end(Node** root, int value)
{
	Node* new_node;
	
	new_node = malloc(sizeof(Node));
	new_node->data = value;
	new_node->next = NULL;
}

void	create_tree(int length, char **elem)
{
	
}

int	main(int argc, char **argv)
{
	create_tree(argc, argv);
}
