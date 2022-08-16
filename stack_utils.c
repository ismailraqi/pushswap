/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iraqi <iraqi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:15:50 by iraqi             #+#    #+#             */
/*   Updated: 2022/08/16 16:01:08 by iraqi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node *new_node(int value)
{
	t_node	*node;
	
	node = (t_node *)malloc(sizeof(t_node *));
	if (!node)
		return (NULL);
	node->value = value;
	node->next = NULL;
	return (node);
}

int	push(t_node *stack, int value)
{
	t_node	*node;

	node = new_node(value);
	if (!node)
		return (-1);
	node->next = stack;
	stack = node;
	return (1);
}

int	pop(t_node *stack)
{
	//TODO Handle if stack its empty
	
}
