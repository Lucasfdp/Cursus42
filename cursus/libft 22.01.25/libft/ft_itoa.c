/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:58:41 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/22 12:54:02 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_count_nums(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		count++;
	}
	while (n != 0)
	{
		count++;
		n = n / 10;
	}
	return (count);
}

int	ft_abval(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	int		is_neg;

	len = ft_count_nums(n);
	is_neg = (n < 0);
	result = calloc(len +1, sizeof(char));
	if (!result)
	{
		return (NULL);
	}
	result[len] = '\0';
	if (n == 0)
	{
		result[0] = '0';
		return (result);
	}
	while (len > 0)
	{
		len--;
		result[len] = ft_abval(n % 10) + '0';
		n = n / 10;
	}
	if (is_neg)
	{
		result[0] = '-';
	}
	return (result);
}
/*
int	main(void)
{
	int	n = -41678;

	char	*result = ft_itoa(n);
	printf("The number %d converted is: %s", n, result);
	free(result);
	return (0);
}*/
