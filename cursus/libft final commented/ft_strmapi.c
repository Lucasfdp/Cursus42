/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:46:48 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 16:46:22 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strmapi: function to iterate through a string a apply the function f to each character and save the result in a new string
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;//pointer variable to store result of malloc
	size_t			str_len;//variable to store length of string
	unsigned int	i;

	if (!s || !f)//check for valididty of s and f
	{
		return (NULL);
	}
	str_len = ft_strlen(s);//gets length of string
	result = malloc(str_len + 1 * sizeof(char));//allocates memory for the length of string + 1 for '\0' multiplied by the size of a char *
	if (!result)//check for failed allocation
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')//loop to iterate through string and apply the function to each character and save it into the new string 
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';//NULL terminates 
	return (result);//returns new string
}
/*
static char	ft_ex_func(unsigned int i, char c)
{
	if (i % 2 == 0)
	{
		return (ft_tolower(c));
	}
	return (ft_toupper(c));
}

int	main(void)
{
	char	str[] = "General Kenobi";
	char	*result = ft_strmapi(str, ft_ex_func);

	if (result)
	{
		printf("The original string: %s\n", str);
		printf("The string after applying function: %s", result);
		free(result);
	}
	return (0);
}*/