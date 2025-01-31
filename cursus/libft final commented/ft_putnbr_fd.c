/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:39:42 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 15:24:03 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//putnbr_fd: function to write a number to a file descriptor
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)//check for negative numbers
	{
		ft_putchar_fd('-', fd);//add '-' first to any negative numbers
		if (n == -2147483648)//special case to handle int min
		{
			ft_putchar_fd('2', fd);//removes first digit so that int max won't be surpassed
			n = 147483648;//remainder of value after removing 2
		}
		else//all other negative cases the number is set to -number so that it can be handled during writing
		{
			n = -n;
		}
	}
	if (n >= 10)//loop to recursivly write each number
	{
		ft_putnbr_fd(n / 10, fd);// Recursively call ft_putnbr_fd to print all but the last digit
	}
	ft_putchar_fd((n % 10) + '0', fd);// Print the last digit by converting it to an ascii character
}
/*
int	main(void)
{
	int	fd;
	int	num;

	num = -2147483648;
	fd = open("nbrfile.txt", O_WRONLY);
	if (fd == -1)
	{
		printf("Error");
	}
	ft_putnbr_fd(num, fd);
	close(fd);
	return (0);
}*/