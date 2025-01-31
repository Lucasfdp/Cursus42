/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:41:19 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 16:55:09 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strcmp: function to compare two strings character by character up to n times and return the difference is they're not equal
// Returns a negative value if the first block is less than the second,
// a positive value if the first block is greater, or 0 if both blocks are equal
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')//loop to compare each charcater up to n times or until the end of a string
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])//check to compare characters
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);//if unequal then it returns the difference between the two
		}
		i++;
	}
	if (i < n)//if a string has reached the end and returns the difference between the '\0' and the character in the other string
	{
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);//returns 0 if strings are equal
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "This is going to be the same";
	char	str2[] = "This is going to be the same";
	char	str3[] = "This is going to be different";
	char	str4[] = "This is going to be hididifkv";

	ft_strncmp(str1, str2, 5);
	ft_strncmp(str3, str4, 5);
	printf("%d\n", ft_strncmp(str1, str2, 28));
	printf("%d\n", ft_strncmp(str3, str4, 32));
	int	result = ft_strncmp("abcdef", "abc\375xx", 5);
	printf("%d\n", result);
	int	result2 = ft_strncmp("test\200", "test\0", 6);
	printf("%d", result2);
	return (0);
}*/