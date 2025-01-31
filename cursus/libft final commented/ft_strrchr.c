/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:08:19 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 17:11:52 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strchr: function that will traverse a string and return the last occurance of the character c
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*last;//pointer variable to hold the last occurance of the character through each loop
	int			i;// Index for iterating through the string
	char		a; // Character to search for, converted from the integer 'c'

	last = NULL;
	i = 0;
	a = c;// Convert the integer 'c' to a char, as we are looking for a character in the string
	while (str[i] != '\0')//loops through string until the end
	{
		if (str[i] == a)//check to see if character has been found
		{
			last = &str[i];//updates value of pointer to the latest position the character was found
		}
		i++;
	}
	if (a == '\0')//special case if character is '\0'
	{
		return ((char *)(str + i));//returns the end of the string
	}
	return ((char *)last);//returns the pointer to the last occurance of the character
}
/*
int	main(void)
{
	char	str[] = "How many a characters are there here ay";
	char	c = 'h';

	char	*result = ft_strrchr(str, c);
	if (result != NULL)
	{
		printf("%c has been found in the position %ld", c, result - str);
	}
	else 
	printf("The character %c has not been found", c);
	return (0);
}*/