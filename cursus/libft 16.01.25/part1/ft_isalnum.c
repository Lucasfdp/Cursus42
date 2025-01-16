/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:52:38 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/15 18:55:37 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(char c)
{
	if (c >= '0' && c <= '9' || c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
		return (1);
}

int	main(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = 'a';
	b = 'B';
	c = '0';
	d = '*';
	printf("%d\n", ft_isalnum(a));
	printf("%d\n", ft_isalnum(b));
	printf("%d\n", ft_isalnum(c));
	printf("%d", ft_isalnum(d));
	return (0);
}
