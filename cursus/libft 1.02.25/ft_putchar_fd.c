/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:33:29 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 17:59:23 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	int	fd;

	fd = open("file.txt", O_WRONLY);
	if (fd == -1)
	{
		printf("Error");
	}
	ft_putchar_fd('H', fd);
	ft_putchar_fd('E', fd);
	ft_putchar_fd('L', fd);
	ft_putchar_fd('L', fd);
	ft_putchar_fd('O', fd);
	close(fd);
	return (0);
}*/