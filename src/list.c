/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drahwanj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:13:24 by drahwanj          #+#    #+#             */
/*   Updated: 2024/12/10 17:13:26 by drahwanj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insert_end(t_Node **head, int value)
{
	t_Node	*newnode;
	t_Node	*curr;

	newnode = malloc(sizeof(t_Node));
	if (newnode == NULL)
		exit(1);
	newnode->data = value;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		curr = *head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = newnode;
	}
}

void	fill_list(t_Node **head, char **argv, int argc)
{
	int			i;

	i = 1;
	while (i < argc)
	{
		insert_end(head, ft_atol(argv[i], head));
		i++;
	}
}

void	print_list(t_Node *head)
{
	t_Node	*curr;

	curr = head;
	while (curr != NULL)
	{
		ft_printf("Data %d\n", curr->data);
		curr = curr->next;
	}
}

void	deallocate_list(t_Node **head)
{
	t_Node	*curr;
	t_Node	*temp;

	curr = *head;
	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
	*head = NULL;
}
