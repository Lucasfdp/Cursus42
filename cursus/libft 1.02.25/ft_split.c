/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:21:53 by luferna3          #+#    #+#             */
/*   Updated: 2025/02/01 16:15:09 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_subs(const char *s, char c)
{
	size_t	num_subs;

	num_subs = 0;
	while (*s)
	{
		if (*s != c)
		{
			num_subs++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (num_subs);
}

void	ft_free_all(char **result, int count)
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
char	**ft_split(const char *s, char c)
{
	char	**result;
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	i = 0;
	result = malloc(sizeof(char *) * (ft_count_subs(s, c) + 1));
	if (!result)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				s++;
			result[i++] = ft_substr(s - len, 0, len);
			if (!result[i])
			{
				ft_free_all(result, i);
				return (0);
			}
			i++;
		}
		else
			s++;
	}
	result[i] = 0;
	return (result);
}

// int	main(void)
// {
// 	char	str[] = "General Kenobi, ive been expecting you.";
// 	char	c = ' ';
// 	char	**result = ft_split(str, c);
// 	int	i;

// 	i = 0;
// 	if (result)
// 	{
// 		while (result[i])
// 		{
// 			printf("Substring %d is: %s\n", i, result[i]);
// 			i++;
// 		}
// 	}
// 	return (0);
// }