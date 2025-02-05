/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:44:14 by luferna3          #+#    #+#             */
/*   Updated: 2025/02/05 15:58:08 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_upper(unsigned int n)
{
	char	*hexdigits;

	hexdigits = "0123456789ABCDEF";
	if (n >= 16)
		ft_puthex_upper(n / 16);
	write(1, &hexdigits[n % 16], 1);
}

// int	main(void)
// {
// 	unsigned int	a = 2600000000;
// 	//unsigned int	b = 208384;
// 	//int	*ptr_a = &a;
// 	//int	*ptr_b = &b;
	
// 	ft_puthex_upper(a);
// 	//ft_puthex_upper(b);
// 	printf("\n%X\n", a);
// 	//ft_printf("%x\n%x", a, b);
	
// 	return (0);
// }