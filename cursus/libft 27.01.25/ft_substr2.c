/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:03:52 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/24 21:10:41 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static size_t	ft_find_len(char const *s, unsigned int start, size_t len)
{
	size_t	str_len;
	size_t	substr_len;

	str_len = ft_strlen(s);
	if (!s || start > (str_len))
	{
		return (1);
	}
	if ((str_len + 1) < len)
	{
		substr_len = str_len - start;
	}
	else
	{
		substr_len = len;
	}
	return (substr_len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	substr_len;
	char	*substr;
	size_t	i;

	substr_len = ft_find_len(s, start, len);
	substr = malloc(substr_len + 1);
	if (!substr)
		return (NULL);
	if (substr_len == 0)
	{
			substr[0] = '\0';
			return (substr);
	}
	i = 0;
	while (i < substr_len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[substr_len] = '\0';
	return (substr);
}

int	main(void)
{
/*	const char	str[] = "";
	unsigned int	start = 1;
	size_t	len = 1;
	char	*substring = ft_substr(str, start, len);*/
	char    *substring = ft_substr("hola", 0, 18446744073709551615);
	if (!substring)
	{
		printf("Failed");
	}
	else 
	{
		printf("%s", substring);
	}
	free(substring);
	return (0);
}
