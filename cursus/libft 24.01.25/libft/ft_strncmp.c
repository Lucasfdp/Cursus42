/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:41:19 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/18 14:49:26 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "This is going to be the same";
	char	str2[] = "This is going to be the same";
	char	str3[] = "This is going to be different";
	char	str4[] = "xhat is your favourite dinosaur?";

	ft_strncmp(str1, str2, 5);
	ft_strncmp(str3, str4, 5);
	printf("%d\n", ft_strncmp(str1, str2, 28));
	printf("%d\n", ft_strncmp(str3, str4, 32));
	return (0);
}*/
