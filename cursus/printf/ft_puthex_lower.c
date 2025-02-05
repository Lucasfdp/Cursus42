/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:29:43 by luferna3          #+#    #+#             */
/*   Updated: 2025/02/05 15:58:00 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_lower(unsigned int n)
{
	char	*hexdigits;

	hexdigits = "0123456789abcdef";
	if (n >= 16)
		ft_puthex_lower(n / 16);
	write(1, &hexdigits[n % 16], 1);
}
// void	pptr(void *ptr)
// {
// 	uintptr_t address = (uintptr_t)ptr;
// 	printf("Pointer address: 0x%lx" PRIxPTR "\n", address);
// }
// int	main(void)
// {
// 	unsigned int	a = 2;
// 	unsigned int	b = 208384;
// 	//int	*ptr_a = &a;
// 	//int	*ptr_b = &b;
	
// 	ft_puthex_lower(a);
// 	ft_puthex_lower(b);
// 	printf("%x\n", a);
// 	//ft_printf("%x\n%x", a, b);
	
// 	return (0);
// }