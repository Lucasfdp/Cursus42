/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 12:47:34 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 17:32:02 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// strtrim: Function that trims characters from both ends of the string 's1' 
// that appear in the 'set' string.
#include "libft.h"

static int	ft_inset(char c, char const *set)//helper function to check of the character c is part of set
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)//if the character is found in 'set', return 1
		{
			return (1);
		}
		i++;
	}
	return (0);//If the character is not found in 'set', return 0
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;// Index for the start of the trimmed string
	size_t	end;   // Index for the end of the trimmed string
	size_t	i;     // Loop variable for building the trimmed string
	char	*trimmed; // The resulting trimmed string
	
	start = 0;
	while (*s1 && ft_inset(s1[start], set))//loop to increase start to the first position a char is not in set
		start++;
	end = ft_strlen(s1);//calculates the length of the string to work from the end backwards
	while (end > start && ft_inset(s1[end - 1], set))//loop to decrease end to the first position a char is not in set 
		end--;
	trimmed = malloc((end - start + 1) * sizeof(char));//allocates memory for the difference of position of start and end and + 1 for '\0'
	if (!trimmed)//check for failed allocation
	{
		return (NULL);
	}
	i = 0;
	while (end > start)//loop to copy trimmed string to the memory allocated
	{
		trimmed[i] = s1[start];
		i++;
		start++;
	}
	trimmed[i] = '\0';//NULL terminator
	return (trimmed);//returns pointer to new string
}
/*
int	main(void)
{
	char	*str = "cababacagGeneralcabacab";
	char	*set = "abcg";
	char	*result = ft_strtrim(str, set);

	if (result)
	{
		printf("Trimmed string is: %s", result);
	}
	free(result);
	return (0);
}*/