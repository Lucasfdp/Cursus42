/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 16:03:51 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/15 19:08:00 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(const char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		i++;
	}
	return (i);
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
/*
int	main(void)
{
	char	*original_str = "General Kenobi";
	char	*new_str = ft_strdup(original_str);

	if (new_str == NULL)
	{
		printf("Failed");
		return (1);
	}
	printf("Original: %s\n", original_str);
	printf("New: %s", new_str);
	free(new_str);
	return (0);
}*/
