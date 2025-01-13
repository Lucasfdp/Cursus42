/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:41:27 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/13 14:50:14 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_digit(char c)
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
	printf("%d\n", ft_is_digit(a));
	printf("%d\n", ft_is_digit(b));
	printf("%d\n", ft_is_digit(c));
	return (0);
}
