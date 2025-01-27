/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 21:52:31 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/23 12:42:46 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*new;

	if (s == NULL)
	{
		return (NULL);
	}
	len = ft_strlen(s) + 1;
	new = malloc(len);
	if (new == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		new[i] = s[i];
		i++;
	}
	return (new);
}

size_t	ft_find_trim(char const *s1, char const *set)
{
	char const	*len;
	size_t		trim_len;
	
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
	return (trim_len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*trimmed;
	size_t		trim_len;
	size_t		i;

	if (!s1)
	{
		return (NULL);
	}
	trim_len = ft_find_trim(s1, set);
	if (trim_len == 0)
	{
		return (malloc(1));
	}
	trimmed = malloc((trim_len + 1) * sizeof(char));
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
	trimmed[trim_len] = '\0';
	return (trimmed);
}

#include <stdio.h>
int	main(void)
{
	char	*str = "   General   ";
	char	*set = " ";
	char	*result = ft_strtrim(str, set);

	if (result)
	{
		printf("Trimmed string is: %s", result);
	}
	free(result);
	return (0);
}
