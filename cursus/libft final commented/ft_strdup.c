/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:03:51 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 16:20:28 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strdup: function to duplicate a string and return a pointer to the new string
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;//variable to hold length of the string 
	size_t	i;
	char	*new;//variable to store the result of the allocation of memory

	len = ft_strlen(s) + 1;//gets length of string + 1 for '\0'
	new = malloc(len);//allocates memory needed for the size of len
	if (new == NULL)//check if allocation failed
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')//loop through string to copy the string to new character by character
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';//adds NULL terminator 
	return (new);//returns copied string
}
/*
int	main(void)
{
	char	*original_str = "General Kenobi";
	char	*new_str = ft_strdup(original_str);

	if (new_str == NULL)
	{
		printf("Failed");
		return (1);
	}
	printf("Original: %s\n", original_str);
	printf("New: %s", new_str);
	free(new_str);
	return (0);
}*/