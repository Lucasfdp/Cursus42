/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:21:53 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 16:09:19 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//split: function that will take a string and split it into an array of substrings by the delimiter character given
#include "libft.h"

static size_t	ft_count_subs(const char *s, char c)//helper function that returns the total amount substrings that can be created
{
	size_t	num_subs;//variable to count the amount of substrings

	num_subs = 0;
	while (*s)//loops through string
	{
		if (*s != c)//check if character is the delimiter if not we're in a substring
		{
			num_subs++;
			while (*s && *s != c)//moves through substring until delimiter or end of string
				s++;
		}
		else
			s++;//skips over concurrent delimiter characters
	}
	return (num_subs);//returns amount of substrings that can be created
}

char	**ft_split(const char *s, char c)
{
	char	**result;//variable to hold array of substrings
	size_t	i;//variable to iterate through array
	size_t	len;//length of each substring

	if (!s)//check for validity of string to read
		return (0);
	i = 0;
	result = malloc(sizeof(char *) * (ft_count_subs(s, c) + 1));//allocation of memory for array of size char * multiplied by amount of substrings + 1 for '\0'
	if (!result)//check if allocation failed
		return (0);
	while (*s)//iterates through string to find substrings
	{
		if (*s != c)//check to see if inside of substring
		{
			len = 0;//initialised to 0 to count length of substring
			while (*s && *s != c && ++len)//loop to get length of substring and create the substring using the substr function
				s++;
			result[i++] = ft_substr(s - len, 0, len);//uses s and len to get the start of the substring and adds it to the array
		}
		else
			s++;//skips concurrent delimiter characters
	}
	result[i] = 0;//adds final NULL terminator
	return (result);//returns array of substrings
}
/*
int	main(void)
{
	char	str[] = "General Kenobi, ive been expecting you.";
	char	c = ' ';
	char	**result = ft_split(str, c);
	int	i;

	i = 0;
	if (result)
	{
		while (result[i])
		{
			printf("Substring %d is: %s\n", i, result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	return (0);
}*/