/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:35:50 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/22 12:51:59 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	int	fd;
	char	str[] = "General Kenobi";

	fd = open("newfile.txt", O_WRONLY);
	if (fd == -1)
	{
		printf("Error");
	}
	ft_putstr_fd(str, fd);
	close(fd);
	return(0);
}*/
