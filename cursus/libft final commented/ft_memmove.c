/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:24:46 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 15:07:11 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//memmove: function to copy byets of memory from a source block to a destination block n times
// handles overlapping blocks of memory
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_ptr;//variable pointer to destination block
	const unsigned char	*src_ptr;//varibale pointer to source block
	unsigned int		i;

	dest_ptr = dest;//initialises pointer to destination memory block
	src_ptr = src;//initialises pointer to source memory block
	if (!src && !dest)//check for validity of both blocks 
	{
		return (dest);//returns destination block if both fail
	}
	i = 0;
	if (dest_ptr >= src_ptr)//check for if destination pointer is at or beyond the source, copy from the end to avoid overwriting data
	{
		i = n;//initialises i to n so that memory blocks can be copied from end to start
		while (i > 0)
		{
			dest_ptr[i - 1] = src_ptr[i - 1];//copies memory 
			i--;
		}
	}
	else
	{
		ft_memcpy(dest, src, n);//if the source if before the destination then memcpy is used as there will be no overlapping
	}
	return (dest);//returns pointer to destination memory block
}
/*
int	main(void)
{
	const unsigned char	src[] = "hello there";
	unsigned char		dest[20];
	unsigned int		n = 20;

	printf("Before memmove: %s\n", dest);
	ft_memmove(dest, src, n);
	printf("After memmove: %s", dest);
	return (0);
}*/