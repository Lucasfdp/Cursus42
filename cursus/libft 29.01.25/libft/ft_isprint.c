/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:21:27 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/29 20:05:33 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
		return (0);
}
/*
int	main(void)
{
	char	a;
	char	b;
	char	c;

	a = '+';
	b = 'b';
	c = '=';
	printf("%d\n", ft_isprint(a));
	printf("%d\n", ft_isprint(b));
	printf("%d\n", ft_isprint(c));
	return (0);
}*/