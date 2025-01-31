/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 15:50:00 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 14:20:43 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//lstsize: function to get amount of nodes in a list
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;//variable to count nodes
	t_list	*temp;//variable to traverse list without changing the original head

	count = 0;//initilise count at 0
	temp = lst;//sets value of temp to lst
	while (temp != NULL)//traverses list till it reaches the last node (next->NULL)
	{
		count++;//increases count each loop
		temp = temp->next;//moves to next node
	}
	return (count);//returns final count which will be amount of nodes
}
/*
int main(void)
{
 	t_list  *head;
 	t_list  *node1;
 	t_list  *node2;
 	t_list  *node3;

 	head = NULL;
 	node1 = ft_lstnew("This is node 1");
 	node2 = ft_lstnew("This is node 2");
 	node3 = ft_lstnew("This is node 3");
 	ft_lstadd_front(&head, node1);
 	ft_lstadd_front(&head, node2);
	ft_lstadd_front(&head, node3);
	int	size = ft_lstsize(head);
	printf("%d", size);
	return(0);
 }*/
