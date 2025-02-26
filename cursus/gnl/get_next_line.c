/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 02:10:28 by luferna3          #+#    #+#             */
/*   Updated: 2025/02/26 01:28:45 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
/*The read() function returns the number of bytes actually read,
 or -1 if there is an error. It does not interpret the data as lines;
it simply pulls raw bytes from the file
ssize_t read(int fd, void *buf, size_t nbyte);*/

char	*ft_free(char **s)
{
	free (*s);
	*s = NULL;
	return (NULL);
}

char	*read_buffer(int fd, char *storage)
{
	char	*buffer;
	ssize_t	red;
	
	red = 1;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (ft_free(&storage));
	while ((red = read(fd, buffer, BUFFER_SIZE) > 0))
	{
		//printf("%s\n", buffer);
		storage = ft_strjoin(storage, buffer);
		//printf("%s\n", storage);
	}
	ft_free(&buffer);
	return (storage);
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
	{
		ft_free(&storage);
		return (NULL);
	}
	return (line);
}

//function to clean storage after \n is found and the line is written
char	*clean(char *storage)
{
	char	*storage_new;
	char	*found_char;
	int		len;
	
	storage_new = malloc(sizeof(BUFFER_SIZE * 1));
	if (!storage_new)
		return (ft_free(&storage));
	found_char = ft_strchr(storage, '\n');
	if (!found_char)
	{
		storage_new = NULL;
		return (ft_free(&storage));
	}
	else
		len = (found_char - storage) + 1;
	storage_new = ft_substr(storage, len, ft_strlen(storage) - len);
	ft_free(&storage);
	return(storage_new);
}

char *get_next_line(int fd)
{
	static char	*buffer;
	char	*line = NULL;

	buffer = malloc(sizeof(BUFFER_SIZE * 1));
	if (!buffer)
		return (ft_free(&buffer));
	if (buffer == NULL || (buffer && !ft_strchr(buffer, '\n')))
		buffer = read_buffer(fd, buffer);
	if (!buffer)
		return (NULL);
	line = add_line(buffer);
	if (!line)
	{
		return (ft_free(&buffer));
	}
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

// int main(void)
// {
// 	char	str[] = "Hola que tal buena\ns";
// 	int	fd = open("ex.txt", O_RDONLY);
//  	char	*line = read_buffer(fd, );
// 	//char	*str_new = add_line(str);
// 	printf("%s\n", line);
// 	return 0;
// }

