/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 15:58:19 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/30 18:48:42 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//atoi: function to change a string of numbers into their integer value
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	sign; //used to determine if the number is neg or pos
	int	result;

	sign = 1;
	result = 0;
	while (*nptr == '\n' || *nptr == '\f' || *nptr == '\t' || *nptr == '\v'
		|| *nptr == '\r' || *nptr == ' ') //skip whitespace chars
	{
		nptr++;
	}
	if (*nptr == '-')
	{
		sign *= -1;// changes number to -number if needed
	}
	if (*nptr == '-' || *nptr == '+')//skip + and - signs
	{
		nptr++;
	}
	while (*nptr >= '0' & *nptr <= '9') //check for chars between 0 and 9 ascii
	{
		result = result * 10 + (*nptr - '0');//converts numbers in string to integer value
		nptr++;
	}
	return (result * sign);//this will give the final number and sign
}

// int	main(void)
// {
// 	char	str1[] = "-4758";

// 	int	result = ft_atoi(str1);
// 	printf("%d", result);
// 	return (0);
// }