/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:35:50 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 15:15:06 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//putstr_fd: function to write a string to a file descriptor
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')//loop to traverse string
	{
		write(fd, &s[i], 1);//writes character by character of the string to the file given each loop
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