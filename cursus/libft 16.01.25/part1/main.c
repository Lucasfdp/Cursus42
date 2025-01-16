/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 15:17:28 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/16 16:33:27 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	str[] = "General Kenobi";

	int	result = ft_strlen(str);

	printf("%d\n", result);

	char	str1[] = "+-+-+++----64758";

	int	result1 = ft_atoi(str1);
	printf("%d\n", result1);

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
}
