/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:52:38 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/30 18:56:12 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//isalnum: function to check if charachter is alphanumerical (alphabetical or numerical)
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));//uses isalpha and isdigit to check for letters or numbers
}
/*
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
}*/