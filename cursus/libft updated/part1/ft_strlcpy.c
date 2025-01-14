/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:51:55 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/14 16:50:18 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i <= size -1)
	{
		dest[i] = src[i];
		i++;
	}
	return (*dest);
}

int	main()
{
	char	src[] = "Hello there";
	char 	dest[30];
	unsigned int	size = 30;

	unsigned int	result = ft_strlcpy(dest, src, sizeof(size));
	printf("%s\n", dest);
	printf("%d", result);
	return (0);
}
