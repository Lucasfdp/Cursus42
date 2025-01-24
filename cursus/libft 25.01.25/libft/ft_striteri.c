/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:14:03 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/22 13:11:47 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
	{
		return ;
	}
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

void	ft_ex_func(unsigned int i, char *c)
{
	if (i % 2 == 0)
	{
		*c = ft_toupper(*c);
	}
	else
	{
		*c = ft_tolower(*c);
	}
}
/*
int	main(void)
{
	char	str[] = "General Kenobi";
	
	ft_striteri(str, ft_ex_func);
	printf("%s", str);
	return (0);
}*/
