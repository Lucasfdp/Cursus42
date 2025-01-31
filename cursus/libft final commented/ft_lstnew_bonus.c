/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:22:51 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 14:17:43 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//lstnew: function to create a new node for a list
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*result;//pointer variable for the new node

	result = (t_list *)malloc(sizeof(*result));//allocating memory for t_list size which will be content plus a pointer to the next node and casting the result as t_list
	if (!result)//check if allocation failed 
	{
		return (NULL);
	}
	result->content = content;//adds the content for the node
	result->next = NULL;//sets next for node to NULL which then might be changed depending on where in the list its added
	return (result);//returns new node
}
