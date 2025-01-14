/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:08:19 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/14 18:26:11 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strrchr(char *str, int c)
{
	char	*last;
	int	i;

	last = NULL;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			last = &str[i];
		}
		i++;
	}
	if (c == '\0')
	{
		return (char *)str;
	}
	return (last);
}

int	main()
{
	char	str[] = "How many a characters are there here ay";
	char	c = 'h';

	char	*result = ft_strrchr(str, c);
	if (result != NULL)
	{
		printf("The character %c has been found last in the position %ld", c, result - str);
	}
	else 
	printf("The character %c has not been found", c);
	return (0);
}
