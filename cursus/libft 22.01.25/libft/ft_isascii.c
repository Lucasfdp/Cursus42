/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:03:07 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/18 14:38:15 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (0);
	}
	else
		return (1);
}
/*
int	main(void)
{
	char	a;
	char	b;
	char	c;

	a = 'a';
	b = '*';
	c = ' ';
	printf("%d\n", ft_isascii(a));
	printf("%d\n", ft_isascii(a));
	printf("%d\n", ft_isascii(a));
	return (0);
}*/