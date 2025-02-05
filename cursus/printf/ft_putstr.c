/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:01:23 by luferna3          #+#    #+#             */
/*   Updated: 2025/02/04 19:02:50 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str)
{
		write(1, str, ft_strlen(str));
}

// int	main(void)
// {
// 	char	str[] = "Wagwan brev";
// 	char	c = 'L';
// 	ft_putstr(str);
// 	ft_putchar(c);
// 	return (0);
// }