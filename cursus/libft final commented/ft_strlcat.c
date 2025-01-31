/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:23:42 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 16:34:47 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function to concatenate to strings into the dest pointer up to the limit of characters (size) and returns the size of the new string created
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;//variable to hold length of dest
	size_t	srclen;//variable to hold length of source
	size_t	i;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	if (size <= destlen)//check to see if the size limit exceeds the length of dest
	{
		return (size + srclen);//returns the length of the source plus the value of size 
	}
	while (src[i] != '\0' && destlen + i < size - 1)//loop to concatenate source to dest while dest has the space 
	{
		dest[destlen + i] = src[i];//concatenates strings starting from the end of the dest string
		i++;
	}
	dest[destlen + i] = '\0';//adds NULL teerminator
	return (destlen + srclen);//returns length of newly created string
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	dest[50] = "These are not the droids you are looking for ";
	char	src[] = "My name jeff";

	char	number = ft_strlcat(dest, src, 100);

	printf("String is: %s\n", dest);
	printf("String length is: %d", number);
	return (0);
}*/