/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 14:03:48 by luferna3          #+#    #+#             */
/*   Updated: 2025/02/01 16:21:15 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*newnode;

	newlist = NULL;
	if (!lst || !f || !del)
	{
		return (NULL);
	}
	while (lst)
	{
		newnode = ft_lstnew(f(lst->content));
		if (!newnode)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		ft_lstadd_back(&newlist, newnode);
		lst = lst->next;
	}
	return (newlist);
}
// void	ft_printlst(t_list *head)
// {
// 	while (head)
// 	{
// 		printf("%s\n", (char *)head->content);
// 		head = head->next;
// 	}
// }

// char	*ft_toupperex(char *c)
// {
//     int i;
//   
//     i = 0;
//     while (c[i] != '\0')
// 	{
//         if (c[i] >= 'a' && c[i] <= 'z')
// 	    {
// 		    c[i] = c[i] - 32;
//     	}
//         i++;
//     }
// 	return (c);
// }

// void	delete(void *node)
// {
// 	free(node);
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
//  	node3 = ft_lstnew("void	ft_printlst(t_list *head)
// {
// 	while (head)
// 	{
// 		printf("%s\n", (char *)head->content);
// 		head = head->next;
// 	}
// }

// void	*ft_toupperex(void *c)
// {
//     int i;
//   
//     i = 0;
//     while (c[i] != '\0')
// 	{
//         if (c[i] >= 'a' && c[i] <= 'z')
// 	    {
// 		    c[i] = c[i] - 32;
//     	}
//         i++;
//     }
// 	return (c);
// }

// void	delete(void *node)
// {
// 	free(node);
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
// 		printf("The last node is: %s\n", (char *)lstnode->content);
// 	}
// 	else
// 	{
// 		printf("No data");
// 	}
// 	printf("List before f:\n");
// 	ft_printlst(head);
//     ft_lstmap(node1, ft_toupperex, delete);
// 	// if (head == node1)
// 	// {
// 	// 	head = node1->next;
// 	// }
//     // ft_lstdelone(node1, delete);
//     // ft_lstclear(&head, delete);
// 	printf("List after f:\n");
// 	ft_printlst(head);
// 	return(0);
// }This is node 3");
//  	ft_lstadd_front(&head, node3);
//  	ft_lstadd_back(&head, node2);
// 	ft_lstadd_front(&head, node1);
// 	int	size = ft_lstsize(head);
// 	printf("%d\n", size);
// 	t_list	*lstnode = ft_lstlast(head);
// 	if (lstnode)
// 	{
// 		printf("The last node is: %s\n", (char *)lstnode->content);
// 	}
// 	else
// 	{
// 		printf("No data");
// 	}
// 	printf("List before f:\n");
// 	ft_printlst(head);
//     ft_lstmap(node1, ft_toupperex, delete);
// 	// if (head == node1)
// 	// {
// 	// 	head = node1->next;
// 	// }
//     // ft_lstdelone(node1, delete);
//     // ft_lstclear(&head, delete);
// 	printf("List after f:\n");
// 	ft_printlst(head);
// 	return(0);
// }