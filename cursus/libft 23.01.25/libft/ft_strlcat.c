/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:23:42 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/18 15:34:28 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
*/
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	if (size <= destlen)
	{
		return (size + srclen);
	}
	while (src[i] != '\0' && destlen + i < size - 1)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + srclen);
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
