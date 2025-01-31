/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:54:42 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 13:35:50 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//lstadd_front: function to add a created n ode to the front of a list
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)//check to see if new node is not null
	{
		return ;
	}
	new->next = *lst;//changes the next of the new node to the current next of the head of the list
	*lst = new;//changes head next to point to the new node
}
/*
int	main(void)
{
	t_list	*head;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	head = NULL;
	node1 = ft_lstnew("This is node 1");
	node2 = ft_lstnew("This is node 2");
	node3 = ft_lstnew("This is node 3");
	ft_lstadd_front(&head, node1);
	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node3);

	return(0);
}*/
