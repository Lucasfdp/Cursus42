/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:56:30 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 16:16:34 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strchr: function that will traverse a string and return the first occurance of the character c
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;// Index for iterating through the string
	char	a; // Character to search for, converted from the integer 'c'

	i = 0;
	a = c;// Convert the integer 'c' to a char, as we are looking for a character in the string
	while (str[i] != '\0')//loops through string until the end
	{
		if (str[i] == a)//conditional check to see if the character has been found
		{
			return ((char *)(str + i));//returns pointer to where the character was found and casts its to the expected char *
		}
		i++;
	}
	if (a == '\0')//check to see if the character to find is the '\0'
	{
		return ((char *)(str + i));//returns pointer to end of string as after the previous loop i will be at the end of the string
	}
	return (NULL);//returns NULL if the character wasn't found
}
/*
int	main(void)
{
	char	str[] = "A new string";
	char	c = '\0';

	char	*result = strchr(str, c);
	if (result != NULL)
	{
		printf("%c was found at the position %ld",c,  result - str);
	}
	else 
	printf("%c was not found in the string", c);
	return (0);
}*/