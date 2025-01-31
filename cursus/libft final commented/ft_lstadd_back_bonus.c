/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:50:11 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 13:33:35 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//lstadd_back: function to add a created node to the back of a list
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lstnode;//variable to get last node as we'll need to change its next

	if (!new || !lst)//check to see if new and lst aren't null
	{
		return ;
	}
	lstnode = ft_lstlast(*lst);//used lstlast to get the last node
	if (!lstnode)//check to see if there is a last node
	{
		*lst = new;//if no last node then new is added directly
	}
	else
		lstnode->next = new;//if last node is found then its next is changed from null to the new node added
}

// int main(void)
// {
// 	t_list  *head;
// 	t_list  *node1;
// 	t_list  *node2;
// 	t_list  *node3;

// 	head = NULL;
//  	node1 = ft_lstnew("This is node 1");
//  	node2 = ft_lstnew("This is node 2");
//  	node3 = ft_lstnew("This is node 3");
//  	ft_lstadd_front(&head, node3);
//  	ft_lstadd_back(&head, node1);
// 	ft_lstadd_back(&head, node2);
// 	int	size = ft_lstsize(head);
// 	printf("%d\n", size);
// 	t_list	*lstnode = ft_lstlast(head);
// 	if (lstnode)
// 	{
// 		printf("%s\n", (char *)lstnode->content);
// 	}
// 	else
// 	{
// 		printf("No data");
// 	}
// 	return(0);
//  }
