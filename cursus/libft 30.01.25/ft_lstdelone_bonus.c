/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:50:21 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/29 22:02:12 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!del)
	{
		return ;
	}
	del(lst->content);
	free(lst);
}

void	delete(void *node)
{
	t_list	*data;

	data = (t_list *)node;
	free(data->content);
	free(data->next);
	free(data);
}

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
 	ft_lstadd_front(&head, node3);
 	ft_lstadd_back(&head, node2);
	ft_lstadd_front(&head, node1);
	int	size = ft_lstsize(head);
	printf("%d\n", size);
	t_list	*lstnode = ft_lstlast(head);
	if (lstnode)
	{
		printf("%s\n", (char *)lstnode->content);
	}
	else
	{
		printf("No data");
	}
    ft_lstdelone(node1, delete);
	return(0);
}
