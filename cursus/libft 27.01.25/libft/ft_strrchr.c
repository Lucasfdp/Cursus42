/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:08:19 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/24 19:46:06 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	const char	*last;
	int			i;
	char		a;

	last = NULL;
	i = 0;
	a = c;
	while (str[i] != '\0')
	{
		if (str[i] == a)
		{
			last = &str[i];
		}
		i++;
	}
	if (a == '\0')
	{
		return ((char *)(str + i));
	}
	return ((char *)last);
}
/*
int	main(void)
{
	char	str[] = "How many a characters are there here ay";
	char	c = 'h';

	char	*result = ft_strrchr(str, c);
	if (result != NULL)
	{
		printf("%c has been found in the position %ld", c, result - str);
	}
	else 
	printf("The character %c has not been found", c);
	return (0);
}*/