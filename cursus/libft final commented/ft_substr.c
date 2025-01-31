/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 22:23:12 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 17:43:16 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//substr: Function to extract a substring from 's' starting at 'start' with a maximum length of 'len'
#include "libft.h"

static size_t	ft_find_len(char const *s, unsigned int start, size_t len)//helper function to calculate the length of substring to create
{
	size_t	str_len;//variable to store total string length
	size_t	substr_len;//variable to store substring length

	str_len = ft_strlen(s);
	if (!s || start > str_len)// If the string is NULL or the start index is beyond the string's length, return 0
	{
		return (0);
	}
	if (str_len < start + len)// If the string's length is less than the sum of 'start' and 'len', we return the remainder of the string starting from 'start'
	{
		substr_len = str_len - start;// Remaining length from start to the end of the string
	}
	else
	{
		substr_len = len;// Return 'len' as the length if there's enough space in the string
	}
	return (substr_len);//returns the length of substring to make 
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	substr_len;//variable to store the length of substring to create
	char	*substr;//pointer variable to store the memory allocated
	size_t	i;

	substr_len = ft_find_len(s, start, len);//calculates the length of substring to create
	substr = malloc(substr_len + 1);//allocates the memory for the length + 1 for '\0'
	if (!substr)//check for failed allocation
		return (NULL);
	i = 0;
	while (i < substr_len)//loop to copy substring to the memory allocated
	{
		substr[i] = s[start + i];//copies substring starting from 'start'
		i++;
	}
	substr[substr_len] = '\0';//NULL terminates
	return (substr);//returns created substring
}
/*
int	main(void)
{
	const char	str[] = "";
	unsigned int	start = 1;
	size_t	len = 1;
	char	*substring = ft_substr(str, start, len);
	if (!substring)
	{
		printf("Failed");
	}
	else 
	{
		printf("%s", substring);
	}
	free(substring);
	return (0);
}*/