/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:02:34 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 14:44:30 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//memchr: function to scan memory and return pointer to the location of the character to find or NULL if non existent
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;//pointer to traverse memory
	unsigned char		to_find;//The character we are looking for (converted to unsigned char
	size_t				i;//index to traverse memory

	ptr = s;//initialises ptr to the start of the memory
	to_find = (unsigned char)c;//initialises to_find to the character by casting c to an unsigned char
	i = 0;
	while (i < n)//loop that will repeat till the index i surpasses the limit of characters to read n
	{
		if (ptr[i] == to_find)//conditional to check if char at position i in ptr is the character to_find
		{
			return ((void *)(ptr + i));//if found return the location it was found and casted to (void *) as thats what the function expects
		}
		i++;
	}
	return (NULL);//returns NULL if the character wasn't found
}
/*
int	main(void)
{
	const unsigned char	str[] = "How uncivilised";
	unsigned char	c = 'd';
	unsigned int	n = 20;

	unsigned char	*result = memchr(str, c, n);
	if (result)
	{
		printf("Found %c at position %ld\n", c, result - str);
	}
	else 
	printf("Character %c not found", c);
	return (0);
}*/