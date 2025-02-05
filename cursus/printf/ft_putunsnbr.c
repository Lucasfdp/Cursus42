/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:14:32 by luferna3          #+#    #+#             */
/*   Updated: 2025/02/05 15:25:17 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunsnbr(unsigned int nbr)
{
	if (nbr >= 10)
	{
		ft_putunsnbr(nbr / 10);
	}
	ft_putchar((nbr % 10) + '0');
}

// int	main(void)
// {
// 	unsigned int	nbr = 84859595;
// 	ft_putunsnbr(nbr);
// 	return (0);
// }