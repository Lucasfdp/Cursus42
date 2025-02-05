/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:40:20 by luferna3          #+#    #+#             */
/*   Updated: 2025/02/05 15:59:35 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	va_list			args;
	int				count;
	int				i;
	char			ch;
	char			*str;
	int				nbr;
	//void			*ptr;
	unsigned int	unbr;
	char			pc;
	
	count = 0;
	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			if (format[i] == 'c')
			{
				ch = va_arg(args, int);
				ft_putchar(ch);
				count++;
			}
			else if (format[i] == 's')
			{
				str = va_arg(args, char *);
				ft_putstr(str);
				count = count + (ft_strlen(str));
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				nbr = va_arg(args, int);
				ft_putnbr(nbr);
				count++;
			}
			// else if (format[i] == 'p')
			// {
			// 	ptr = va_arg(args, void*);
			// 	pptr(ptr);
			// 	count++;
			// }
			else if (format[i] == 'u')
			{
				unbr = va_arg(args, unsigned int);
				ft_putunsnbr(unbr);
				count++;
			}
			else if (format[i] == '%')
			{
				pc = va_arg(args, int);
				ft_putchar('%');
				count++;
			}
			else if (format[i] == 'x')
			{
				unbr = va_arg(args, unsigned int);
				ft_puthex_lower(unbr);
				count++;
			}
			else if (format[i] == 'X')
			{
				unbr = va_arg(args, unsigned int);
				ft_puthex_upper(unbr);
				count++;
			}
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}

int	main(void)
{
	char	c = 'C';
	char	str[] = "why am I here?";
	unsigned int	nbr = 45;
	char	pc = '%';
	//int		nb = 44;
	//void	*ptr = &nbr;
	ft_printf("hello boss%c how are you? %s i dunno m8 %%probably, but %x\n", c, str, pc, nbr);
	printf("%u", nbr);
	return (0);
}