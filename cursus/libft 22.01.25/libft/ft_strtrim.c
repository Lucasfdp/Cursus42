/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 21:52:31 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/22 12:58:56 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*len;
	char		*trimmed;
	size_t		trim_len;
	int			i;

	if (!s1)
	{
		return (NULL);
	}
	while (*s1 && ft_strchr(set, *s1))
	{
		s1++;
	}
	len = s1;
	while (*len)
	{
		len++;
	}
	while (len > s1 && ft_strchr(set, *(len - 1)))
	{
		len--;
	}
	trim_len = len - s1;
	if (trim_len == 0)
	{
		return (malloc(1));
	}
	trimmed = malloc(trim_len + 1);
	if (!trimmed)
	{
		return (NULL);
	}
	i = 0;
	while (i < trim_len)
	{
		trimmed[i] = s1[i];
		i++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str = "    General Kenobi    ";
	char	*set = "G i";
	char	*result = ft_strtrim(str, set);

	if (result)
	{
		printf("Trimmed string is: %s", result);
	}
	free(result);
	return (0);
}*/

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

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			return ((char *)str);
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)str);
	}
	return (NULL);
}
