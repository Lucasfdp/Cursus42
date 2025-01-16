/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:41:21 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/15 19:03:18 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(char c)
{
	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
	{
		return (0);
	}
	else
		return (1);
}
/*
int	main(void)
{
	char	charb;

	charb = '+';
	printf("%d", ft_isalpha(charb));
	return (0);
}*/
