/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:36:23 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 14:51:46 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//memcmp: function to compare characters in different blocks of memory
// Returns a negative value if the first block is less than the second,
// a positive value if the first block is greater, or 0 if both blocks are equal.
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;//variable to traverse first block
	const unsigned char	*ptr2;//variable to traverse second block
	size_t				i;//index to traverse memory

	ptr1 = s1;//initialises to start of first block
	ptr2 = s2;//initialises to start of second block
	i = 0;
	while (i < n)//loop that will repeat till the index i surpasses the limit of characters to read n
	{
		if (ptr1[i] != ptr2[i])//conditional to check if character at position i is different in each block
		{
			return (ptr1[i] - ptr2[i]);//if different then returns difference between both bytes
		}
		i++;
	}
	return (0);//if all memory read up to the limit n is the same then 0 is returned to signify equality
}
/*
int	main(void)
{
	const unsigned char	str1[] = "general";
	const unsigned char	str2[] = "General";
	size_t	n = 8;

	int	result = ft_memcmp(str1, str2, n);
	if (result == 0)
	{
		printf("They are the same");
	}

	else if (result > 0)
	{
		printf("1 is greater than 2");
	}
	else
	{
		printf("2 is greater than 1");
	}
	return (0);
}*/