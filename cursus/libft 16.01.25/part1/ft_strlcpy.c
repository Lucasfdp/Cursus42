/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:51:55 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/15 19:06:00 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = ft_strlen(src);
	i = 0;
	while (src[i] != '\0' && i <= size -1)
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
	char	src[] = "Hello there";
	char 	dest[30];
	unsigned int	size = 9;

	unsigned int	result = ft_strlcpy(dest, src, size);
	printf("%s\n", dest);
	printf("%d", result);
	return (0);
}*/
