/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:41:27 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/14 14:44:57 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (0);
	}
	else 
	return(1);
}

int	main()
{
	char	a;
	char	b;
	char	c;

	a = '9';
	b = '2';
	c = '3';
	printf("%d\n", ft_isdigit(a));
	printf("%d\n", ft_isdigit(b));
	printf("%d\n", ft_isdigit(c));
	return (0);
}
