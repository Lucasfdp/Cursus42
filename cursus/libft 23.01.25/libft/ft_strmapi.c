/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:46:48 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/22 12:55:40 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	size_t			str_len;
	unsigned int	i;

	if (!s || !f)
	{
		return (NULL);
	}
	str_len = ft_strlen(s);
	result = malloc(str_len + 1 * sizeof(char));
	if (!result)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	ft_ex_func(unsigned int i, char c)
{
	if (i % 2 == 0)
	{
		return (ft_tolower(c));
	}
	return (ft_toupper(c));
}
/*
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