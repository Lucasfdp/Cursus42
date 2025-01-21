/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:41:24 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/20 16:35:50 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	strlcpy(substring, start, len + 1);
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
/*size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	i = 0;
	while (src[i] != '\0' && i <= size -1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}*/
char    **ft_split(char const *s, char c)
{
        char const      *substart;
        char            **result;
        int                     substrs;
        int                     i;

        i = 0;
        substrs = num_substrs(s, c);
        result = calloc(substrs + 1, sizeof(char *));
        if (!result)
        {
                return (NULL);
        }
        while (*s)
        {
                while (*s == c)
                {
                        s++;
                }
                if (*s)
                {
                        substart = s;
                        while (*s && *s != c)
                        {
                                s++;
                        }
                        result[i] = ft_alloc_cpy(substart, s);
                        if (!result[i])
                        {
                                ft_free_all(result, i);
                                return (NULL);
                        }
                        i++;
                }
        }
        return (result);
}

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
}
