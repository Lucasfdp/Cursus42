/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 16:49:07 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/19 17:58:56 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_memmove(void *dest, const void *src, size_t n)

static size_t	ft_strlen(const char *str)

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joint_str;

	joint_str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!joint_str)
	{
		return (NULL);
	}
	ft_memmove(joint_str, s1, ft_strlen(s1));
	ft_memmove(joint_str + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (joint_str);
}
/*
int	main(void)
{
	char	str1[] = "General ";
	char	str2[] = "Kenobi";
	char	*join = ft_strjoin(str1, str2);
	printf("%s", join);
	free(join);
	return (0);
}*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;
	unsigned int		i;

	dest_ptr = dest;
	src_ptr = src;
	i = 0;
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}

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