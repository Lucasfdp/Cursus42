/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:58:41 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 13:28:50 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//itoa: fucntion to convert an integer number to a string of numbers
#include "libft.h"

static int	ft_count_nums(int n)//helper function to count how many numbers there are
{
	int	count;

	count = 0;
	if (n <= 0)//check for minus numbers or 0
	{
		count++;//increase the count once for either '-' or 0
	}
	while (n != 0)//loop to get the total numbers by increasing the count and dividing by 10 until 0 is reached
	{
		count++;
		n = n / 10;
	}
	return (count);
}

static int	ft_abval(int n)//helper function to give the absolute value (value with sign)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}

static char	*ft_convertnum(int len, int n, char *result)//helper function to convert numbers to ascii (string form)
{
	int	is_neg;//variable to add '-' if needed

	is_neg = (n < 0);//boolean check for '-'
	while (len > 0)//loop to get the final string
	{
		len--;
		result[len] = ft_abval(n % 10) + '0';//takes last number, changes it to char and add it to string result
		n = n / 10;//divide n by 10 to get next digit
	}
	if (is_neg)//adds '-' if needed
	{
		result[0] = '-';
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;

	if (n == 0)//check for value 0
	{
		result = malloc (2 * sizeof(char));//allocate memory for 2 chars, 0 and '\0'
		result[0] = '0';
		result[1] = '\0';
		return (result);
	}
	len = ft_count_nums(n);//gets the amount of numbers
	result = malloc((len + 1) * sizeof(char));//allocate memory for chars needed (len + 1 to account for '\0')
	if (!result)//check for failed allocation
	{
		return (NULL);
		result[len] = '\0';
	}
	ft_convertnum(len, n, result);//takes number and converts it to string
	result[len] = '\0';//add '\0' to end of string
	return (result);
}
/*
int	main(void)
{
//	int	n = 1000034;

	char	*result = ft_itoa(-10004);
	printf("The number converted is: %s", result);
	free(result);
	return (0);
}*/