/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:02:38 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 17:06:26 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strnstr: function to locate a substring in a string up to len characters, returns pointer to start of substring or NULL
//if little is empty the big string is returned
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	x;//index to traverse big
	size_t	y;//index to traverse small

	if (*little == '\0')//check to see if little is empty
		return ((char *)big);//returns big casted to char *
	x = 0;
	while (big[x] != '\0' && x < len)//loops through big up to len characters 
	{
		if (big[x] == little[0])//check to see if current character of big = the first character of little
		{
			y = 0;//initialises y to 0 to start comparing little from the start
			while (big[x + y] == little[y] && little[y] != '\0'
				&& (x + y) < len)// Loop to compare the substring 'little' with the part of 'big' starting from 'x'
			{
				y++;
			}
			if (little[y] == '\0')//check to see if little has ended
			{
				return ((char *)(big + x));//returns pointer to start of the matched substring
			}
		}
		x++;
	}
	return (NULL);//returns NULL if no substring was found
}
/*
int	main(void)
{
	char	big[] = "abcdefgh";
	char	little[] = "abc";
	unsigned int	len = 2;
	char	*string = ft_strnstr(big, little, len);

	if (string)
	{
		printf("%s", string);
	}
	else 
	printf("No string found");
	return (0);
}*/