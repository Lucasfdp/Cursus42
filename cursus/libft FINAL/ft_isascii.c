/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:03:07 by luferna3          #+#    #+#             */
/*   Updated: 2025/02/02 20:23:39 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
		return (0);
}

// int	main(void)
// {
// 	char	a;
// 	char	b;
// 	char	c;

// 	a = 'a';
// 	b = '*';
// 	c = ' ';
// 	printf("%d\n", ft_isascii(a));
// 	printf("%d\n", ft_isascii(a));
// 	printf("%d\n", ft_isascii(a));
// 	return (0);
// }