/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 14:42:20 by luferna3          #+#    #+#             */
/*   Updated: 2025/02/05 15:45:12 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdint.h>
#include <inttypes.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nbr);
size_t	ft_strlen(const char *str);
void	ft_puthex_lower(unsigned int n);
void	ft_puthex_upper(unsigned int n);
void	ft_putunsnbr(unsigned int nbr);

#endif