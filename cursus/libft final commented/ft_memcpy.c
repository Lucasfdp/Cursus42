/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:07:06 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 14:57:48 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//memcpy: function to copy content of a source memory block to the destination block up to n times
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*dest_ptr;//variable pointer to destination block
	const unsigned char		*src_ptr;//varibale pointer to source block
	size_t					i;

	if (!src && !dest)//check for validity of both blocks 
	{
		return (dest);//returns destination block if both fail
	}
	dest_ptr = dest;//initialises pointer to destination memory block
	src_ptr = src;//initialises pointer to source memory block
	i = 0;
	while (i < n)//loop that will repeat till the index i surpasses the limit of characters to read n
	{
		dest_ptr[i] = src_ptr[i];//copies byte i from source to destination
		i++;
	}
	return (dest);//returns pointer to destination memory block
}
/*
int	main(void)
{
	unsigned char	src[] = "String";
	unsigned char	dest[10];
	size_t	n = 1;

	printf("Before memcpy: %s\n", dest);
	ft_memcpy(dest, src, n);
	printf("After memcpy: %s", dest);
	return (0);
}*/