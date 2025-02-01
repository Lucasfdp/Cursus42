/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:58:19 by luferna3          #+#    #+#             */
/*   Updated: 2025/02/01 15:11:46 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//checks for int max and min
int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*nptr == '\n' || *nptr == '\f' || *nptr == '\t' || *nptr == '\v'
		|| *nptr == '\r' || *nptr == ' ')
	{
		nptr++;
	}
	if (*nptr == '-')
	{
		sign *= -1;
	}
	if (*nptr == '-' || *nptr == '+')
	{
		nptr++;
	}
	while (*nptr >= '0' & *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (result * sign);
}
/*
int	main(void)
{
	char	str1[] = "-64758";

	int	result = ft_atoi(str1);
	printf("%d", result);
	return (0);
}*/