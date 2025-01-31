/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:51:55 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 16:41:53 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function to copy the source string into the dest pointer up to the limit of characters (size) and returns the size of the new string created
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;//variable to hold length of the source string

	src_len = ft_strlen(src);
	i = 0;
	if (size < 1)//check to see if size is 0 or less then no string will be copied
	{
		return (src_len);//returns length  of the string attempted to create
	}
	while (src[i] != '\0' && i < size - 1)//loop to copy characters while i < size and keeping a space to the NULL terminator
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
/*
int	main(void)
{
	char	src[] = "hello there";
	char 	dest[30];
	unsigned int	size = 4;

	unsigned int	result = ft_strlcpy(dest, src, size);
	printf("%s\n", dest);
	printf("%d", result);
	return (0);
}*/