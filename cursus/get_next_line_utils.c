/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 02:12:10 by luferna3          #+#    #+#             */
/*   Updated: 2025/02/27 00:18:19 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// size_t	ft_strlen(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	return (i);
// }

// void	*ft_calloc(size_t nmemb, size_t size)
// {
// 	unsigned char	*ptr;
// 	size_t	i;

// 	i = 0;
// 	ptr = malloc(nmemb * size);
// 	if (ptr == NULL)
// 	{
// 		return (NULL);
// 	}
// 	while (i > size)
// 	{
// 		ptr[i] = 0;
// 		i++;
// 	}
// 	return (ptr);
// }

// char	*ft_strjoin(char *stash, char *buff)
// {
// 	char	*str;
// 	int		i;
// 	int		j;

// 	if (!stash || !buff)
// 		return (NULL);
// 	str = ft_calloc(sizeof(char), ft_strlen(stash) + ft_strlen(buff) + 1);
// 	if (!str)
// 		return (NULL);
// 	i = 0;
// 	while (stash[i])
// 	{
// 		str[i] = stash[i];
// 		i++;
// 	}
// 	j = 0;
// 	while (buff[j])
// 	{
// 		str[i + j] = buff[j];
// 		j++;
// 	}
// 	free(stash);
// 	return (str);
// }

// char	*ft_strjoin(char *s1, char *s2)
// {
// 	char			*joint_str;
// 	unsigned int	i;
// 	unsigned int	j;

// 	i = 0;
// 	j = 0;
// 	if (!s1 || !s2)
// 		return (NULL);
// 	joint_str = ft_calloc(sizeof(char), ft_strlen(s1) + ft_strlen(s2) + 1);
// 	if (!joint_str)
// 		return (NULL);
// 	while (s1[i] != '\0')
// 	{
// 		joint_str[i] = s1[i];
// 		i++;
// 	}
// 	while (s2[i] != '\0')
// 	{
// 		joint_str[i] = s2[j];
// 		i++;
// 		j++;
// 	}
// 	joint_str[i] = '\0';
// 	return (joint_str);
// }

// char	*ft_strchr(char *str, int c)
// {
// 	int		i;
// 	char	a;

// 	i = 0;
// 	a = c;
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] == a)
// 		{
// 			return ((char *)(str + i));
// 		}
// 		i++;
// 	}
// 	if (a == '\0')
// 	{
// 		return ((char *)(str + i));
// 	}
// 	return (NULL);
// }

// char	*ft_substr(char *s, int start, int len)
// {
// 	size_t	substr_len;
// 	char	*substr;
// 	size_t	i;

//     if (!s || start > ft_strlen(s))
// 		return (0);
//     if (ft_strlen(s) < start + len)
// 		len = ft_strlen(s) - start;
// 	substr = ft_calloc(sizeof(char), len + 1);
// 	if (!substr)
// 		return (NULL);
// 	i = 0;
// 	while (i < len)
// 	{
// 		substr[i] = s[start + i];
// 		i++;
// 	}
// 	substr[len] = '\0';
// 	return (substr);
// }

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strrchr(char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (unsigned char)c)
			return ((char *)s);
		len--;
	}
	return (0);
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

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	while (i < count * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

char	*ft_substr(char *s, int start, int len)
{
	char	*dst;
	int		i;

	if ((!s) || (start > ft_strlen(s)))
		return (NULL);
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	dst = ft_calloc(sizeof(char), len + 2);
	if (!dst)
		return (NULL);
	i = 0;
	while (len >= i)
	{
		dst[i] = s[start + i];
		i++;
	}
	return (dst);
}

char	*ft_strjoin(char *stash, char *buff)
{
	char	*str;
	int		i;
	int		j;

	if (!stash || !buff)
		return (NULL);
	str = ft_calloc(sizeof(char), ft_strlen(stash) + ft_strlen(buff) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (stash[i])
	{
		str[i] = stash[i];
		i++;
	}
	j = 0;
	while (buff[j])
	{
		str[i + j] = buff[j];
		j++;
	}
	free(stash);
	return (str);
}
// int main(void)
// {
// 	char	str1[] = "hola qu";
// 	//char	str2[] = "e tal";
// 	char	*str3 = ft_substr(str1, 2, 4);
// 	printf("%s\n", str3);
// 	return 0;
// }