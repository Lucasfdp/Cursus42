/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 02:12:10 by luferna3          #+#    #+#             */
/*   Updated: 2025/02/25 01:00:43 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char			*joint_str;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	joint_str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!joint_str)
		return (NULL);
	while (s1[i] != '\0')
	{
		joint_str[i] = s1[i];
		i++;
	}
	while (s2[i] != '\0')
	{
		joint_str[i] = s2[j];
		i++;
		j++;
	}
	joint_str[i] = '\0';
	return (joint_str);
}

char	*ft_strchr(char *str, int c)
{
	int		i;
	char	a;

	i = 0;
	a = c;
	while (str[i] != '\0')
	{
		if (str[i] == a)
		{
			return ((char *)(str + i));
		}
		i++;
	}
	if (a == '\0')
	{
		return ((char *)(str + i));
	}
	return (NULL);
}

size_t	ft_find_len(char *s, unsigned int start, size_t len)
{
	size_t	str_len;
	size_t	substr_len;

	str_len = ft_strlen(s);
	if (!s || start > str_len)
	{
		return (0);
	}
	if (str_len < start + len)
	{
		substr_len = str_len - start;
	}
	else
	{
		substr_len = len;
	}
	return (substr_len);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t	substr_len;
	char	*substr;
	size_t	i;

	substr_len = ft_find_len(s, start, len);
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

// int main(void)
// {
// 	char	str1[] = "hola qu";
// 	char	str2[] = "e tal";
// 	char	*str3 = ft_strjoin(str1, str2);
// 	printf("%s", str3);
// 	return 0;
// }
