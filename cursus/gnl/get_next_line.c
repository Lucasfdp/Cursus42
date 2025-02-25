/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 02:10:28 by luferna3          #+#    #+#             */
/*   Updated: 2025/02/25 03:14:59 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
/*The read() function returns the number of bytes actually read,
 or -1 if there is an error. It does not interpret the data as lines;
it simply pulls raw bytes from the file
ssize_t read(int fd, void *buf, size_t nbyte);*/

char	*ft_free(char **s)
{
	free (s);
	*s = NULL;
	return (NULL);
}

// function to clean storage after \n is found and the line is written
char	*clean(char *storage)
{
	char	*storage_new;
	char	*found_char;
	int		len;
	
	found_char = ft_strchr(storage, '\n');
	if (!found_char)
	{
		storage_new = NULL;
		return (ft_free(&storage));
	}
	else
		len = (found_char - storage) + 1;
	storage_new = ft_substr(storage, len, ft_strlen(storage) - len);
	if (!storage_new)
		return (NULL);
	return (storage_new);
}
char	*add_line(char *storage)
{
	char	*line;
	char	*found_char;
	int		len;

	found_char = ft_strchr(storage, '\n');
	len = (found_char - storage) + 1;
	line = ft_substr(storage, 0 , len);
	if (!line)
		return (NULL);
	return (line);
}

char	*read_buffer(int fd, char *storage)
{
	char	*buffer;
	ssize_t	ret;
	
	ret = 1;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (ft_free(&storage));
	while (ret > 0 && !ft_strchr(buffer, '\n'))
	{
		ret = read(fd, buffer, BUFFER_SIZE + 1);
		if (ret > 0)
		{
			buffer[ret] = '\0';
			storage = ft_strjoin(storage, buffer);
		}
	}
	free(buffer);
	if (ret == -1)
		return (ft_free(&storage));
	return (storage);
}

char *get_next_line(int fd)
{
	static char	*buffer;
	char	*line = NULL;
	buffer = read_buffer(fd, buffer);
	line = add_line(buffer);
	buffer = clean(buffer);
	return (line);
}

int main(void)
{
	int	fd = open("ex.txt", O_RDONLY);
	char	*line = get_next_line(fd);
	printf("%s", line);
	close (fd);
	return 0;
}
