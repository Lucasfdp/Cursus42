/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:09:08 by luferna3          #+#    #+#             */
/*   Updated: 2025/02/10 21:11:15 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		if (nbr == -2147483648)
		{
			ft_putchar('2');
			nbr = 147483648;
		}
		else
			nbr = -nbr;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar((nbr % 10) + '0');
}

void	ft_putunsnbr(unsigned int nbr)
{
	if (nbr >= 10)
	{
		ft_putunsnbr(nbr / 10);
	}
	ft_putchar((nbr % 10) + '0');
}

int	num_len(int num)
{
	int	len;

	len = 0;
	if (num <= 0)
		len++;
	while (num != '\0')
	{
		num = num / 10;
		len++;
	}
	return (len);
}

int	handle_int(int n)
{
	ft_putnbr(n);
	return (num_len(n));
}

int	handle_uint(unsigned int unbr)
{
	ft_putunsnbr((unsigned int)unbr);
	return (num_len(unbr));
}
// int	main(void)
// {
// 	int	n = 2147483647;
// 	ft_putnbr(n);
// 	return (0);
// }