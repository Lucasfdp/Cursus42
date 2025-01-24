/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:50:21 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/24 22:58:30 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	num_substrs(char const *s, char c)
{
	int	num;

	num = 0;
	while (*s)
	{
		while (*s == c)
		{
			s++;
		}
		if (*s != '\0')
		{
			num++;
		}
		while (*s && *s != c)
		{
			s++;
		}
	}
	return (num);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int		j;
	size_t	i;
	size_t	src_len;

	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	src_len = j;
	i = 0;
	while (src[i] != '\0' && i <= size -1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

char	*ft_alloc_cpy(char const *start, char const *end)
{
	char	*substring;
	size_t	len;

	len = end - start;
	substring = calloc(len + 1, sizeof(char));
	if (!substring)
	{
		return (NULL);
	}
	ft_strlcpy(substring, start, len + 1);
	if (!substring)
	{
		free(substring);
		return (NULL);
	}
	return (substring);
}

void	ft_free_all(char **result, int count)
{
	int	i;

	i = 0;
	while (i > count)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char		**result;
	char const	*start;
	int			i;

	i = 0;
	result = calloc(num_substrs(s, c) + 1, sizeof(char *));
	if (!result)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			start = s;
			while (*s && *s != c)
				s++;
			result[i] = ft_alloc_cpy(start, s);
			i++;
		}
	}
	return (result);
}

int	main(void)
{
	char	str[] = "hello!";
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
}
