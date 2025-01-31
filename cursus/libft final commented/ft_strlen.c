/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:50:56 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 16:42:12 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function to calculate the length of a string
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*#include <stdio.h>
int	main(void)
{
	char	str[] = "General Kenobi";

	int	result = ft_strlen(str);

	printf("%d", result);
	return (0);
}*/