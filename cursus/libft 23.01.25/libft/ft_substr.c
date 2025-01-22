/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:03:52 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/22 15:09:22 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	str_len;
	size_t	substr_len;
	char	*substr;
	size_t	i;

	str_len = ft_strlen(s);
	if (!s || (start + len) > str_len || len < 0)
		return (NULL);
	if (str_len < len + start)
		substr_len = str_len - start;
	else
		substr_len = len;
	substr = malloc(substr_len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < substr_len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[substr_len] = '\0';
	return (substr);
}
/*
int	main(void)
{
	const char	str[] = "General Kenobi";
	unsigned int	start = 2;
	size_t	len = 12;
	char	*substring = ft_substr(str, start, len);

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
}*/
