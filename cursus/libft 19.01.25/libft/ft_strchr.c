/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:56:30 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/18 13:29:48 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			return ((char *)str);
			i++;
		}
	}
	if (c == '\0')
	{
		return ((char *)str);
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "A new string";
	char	c = 'A';

	char	*result = strchr(str, c);
	if (result != NULL)
	{
		printf("%c was found at the position %ld",c,  result - str);
	}
	else 
	printf("%c was not found in the string", c);
	return (0);
}*/
