/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:21:53 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/29 20:00:38 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static size_t	ft_sub_len(const char *s, char c)
{
	size_t	sub_len;

	sub_len = 0;
	while (*s)
	{
		if (*s != c)
		{
			sub_len++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (sub_len);
}

char	**ft_split(const char *s, char c)
{
	char	**result;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	result = malloc(sizeof(char *) * (ft_sub_len(s, c) + 1));
	if (!result)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				s++;
			result[i++] = ft_substr(s - len, 0, len);
		}
		else
			s++;
	}
	result[i] = 0;
	return (result);
}
/*
int	main(void)
{
	char	str[] = "General Kenobi, ive been expecting you.";
	char	c = ' ';
	char	**result = ft_split(str, c);
	int	i;

	i = 0;
	if (result)
	{
		while (result[i])
		{
			printf("Substring %d is: %s\n", i, result[i]);
			free(result[i]);
			i++;
		}
		free(result);
	}
	return (0);
}*/