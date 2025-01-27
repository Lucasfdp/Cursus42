/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:50:21 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/27 20:35:14 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int	num_substrs(char const *s, char c)
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
			while (*s && *s != c)
			{
				s++;
			}
		}
	}
	return (num);
}

static char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*new;

	if (!s)
	{
		return (NULL);
	}
	new = malloc(n + 1);
	if (!new)
	{
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

void	*ft_free_all(char **result, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

/*
char	**ft_get_result(char const *s, char c)
{
	char		**result;
	char const	*start;
	int			i;

	i = 0;
	result = malloc((num_substrs(s, c) + 1) * sizeof(char *));
	if (!result)
	{
		return (NULL);
	}
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			start = s;
			while (*s && *s != c)
				s++;
			result[i] = ft_strndup(start, s - start);
		}
	}
	return (result);
}
*/
char	**ft_split(char const *s, char c)
{
	char		**result;
	char const	*start;
	int			i;

	if (!s)
		return (NULL);
	if (*s == '\0')
	{
		result = malloc(sizeof(char *));
		if (result)
			result[0] = NULL;
		return (result);
	}
	i = 0;
	result = malloc((num_substrs(s, c) + 1) * sizeof(char *));
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
			result[i] = ft_strndup(start, s - start);//get_result(s, c);
			if (!result[i])
			{
				while (i > 0)
				{
					free(result[--i]);
				}
				free(result);
				return (NULL);
			}
			i++;
		}
	}
	result[i] = NULL;
	return (result);
}


int	main(void)
{
	char	str[] = "hhdhd fjfjj skkskaj jf fjf fjg";
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
