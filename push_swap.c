/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:59:08 by drahwanj          #+#    #+#             */
/*   Updated: 2024/12/09 19:33:51 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_end(Node** root, int value)
{
	Node* new_node;
	Node* curr;

	new_node = malloc(sizeof(Node));
	if (new_node == NULL)
	{
		exit(1);
	}
	new_node->next = NULL;
	new_node->data = value;
	curr = *root;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = new_node;
}

void	create_tree(int length, char **elem)
{
	
}

int	main(int argc, char **argv)
{
	create_tree(argc, argv);
}
