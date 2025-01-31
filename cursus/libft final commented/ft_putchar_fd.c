/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:33:29 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 15:11:14 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//putchar_fd: function to write a character to the file descriptor given
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);//writes the character given to the file given
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