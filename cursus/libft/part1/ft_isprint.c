/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:21:27 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/13 15:29:09 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(char c)
{
	if (c >= 32 && c <= 126)
	{
		return (0);
	}
	else 
	return (1);
}

int	main()
{
	char	a;
	char	b;
	char	c;

	a = 'ç';
	b = 'b';
	c = '=';
	printf("%d\n", ft_isprint(a));
	printf("%d\n", ft_isprint(b));
	printf("%d\n", ft_isprint(c));
	return(0);
}
