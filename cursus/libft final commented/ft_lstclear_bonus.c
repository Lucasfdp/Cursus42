/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:29:03 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 13:44:16 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//lstclear: function to delete all nodes of a list using del function
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;//temp variable to traverse list without changing original head

	if (!lst || !del)//check for validity of del function and lst head
	{
		return ;
	}
	while (*lst)//traversing the list while deleting nodes
	{
		temp = (*lst)->next;//saves next node in list to temp
		del((*lst)->content);//deletes content at current node
		free(*lst);//frees node
		(*lst) = temp;//equals temp to lst to get node for the next loop
	}
}
// void	delete(void *node)
// {
// 	free(node);
// }

// void	ft_printlst(t_list *head)
// {
// 	while (head)
// 	{
// 		printf("%s\n", (char *)head->content);
// 		head = head->next;
// 	}
// }
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
//  	ft_lstadd_back(&head, node2);
// 	ft_lstadd_front(&head, node1);
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
// 	printf("List before del:\n");
// 	ft_printlst(head);
// 	if (head == node1)
// 	{
// 		head = node1->next;
// 	}
//     //ft_lstdelone(node1, delete);
//     ft_lstclear(&head, delete);
// 	printf("List after del:\n");
// 	ft_printlst(head);
// 	return(0);
// }
