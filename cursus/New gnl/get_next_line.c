/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 18:39:56 by luferna3          #+#    #+#             */
/*   Updated: 2025/03/06 02:30:16 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
/*The read() function returns the number of bytes actually read,
 or -1 if there is an error. It does not interpret the data as lines;
it simply pulls raw bytes from the file
ssize_t read(int fd, void *buf, size_t nbyte);*/

char	*read_buffer(int fd, char *storage)
{
	char	*buffer = NULL;
	ssize_t	red;
    char   *temp;
	
	red = 1;
	if (!storage)
		storage = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
	{
		free(buffer);
		free(storage);
		return (NULL);
	}
	while ((red = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		if (red == -1)
			return (free(buffer), free(storage), NULL);
		buffer[red] = '\0';
		temp = ft_strjoin(storage, buffer);
		free(storage);
		storage = temp;
		if (!storage)
		{
			free(buffer);
			return (NULL);
		}
	}
	free(buffer);
	return (storage);
}

// char	*read_buffer(int fd, char *storage)
// {
// 	char	*temp;
// 	char	*buffer = NULL;
// 	int		red;
	
// 	red = 1;
// 	while (!ft_strchr(storage, '\n'))
// 	{
// 		red = read(fd, buffer, BUFFER_SIZE);
// 		if (red < 0)
// 			return (free(buffer), NULL);
// 		buffer[red] = '\0';
// 		temp = ft_strjoin(storage, buffer);
// 		free(storage);
// 		storage = temp;
// 	}
// 	return (storage);
// }

char	*add_line(char *storage)
{
	char	*line = NULL;
	char	*found_char;
	int		len;

	if((found_char = ft_strchr(storage, '\n')))
	{
		len = (found_char - storage) + 1;
		line = ft_substr(storage, 0 , len);
		
	}
	else
	{
		len = ft_strlen(storage);
		line = ft_substr(storage, 0 , len);
	}
	if (!line)
	{
		free(line);
		free(storage);
		return (NULL);
	}
	return (line);
}

// char	*clean(char *storage)
// {
// 	char	*storage_new;
// 	int		len;

// 	len = 0;
// 	while (storage[len] != '\n' && storage[len] != '\0')
// 		len++;
// 	if (!storage[len])
// 		return (free(storage), NULL);
// 	storage_new = ft_substr(storage, len + 1, ft_strlen(storage));
// 	free(storage);
// 	return (storage_new);
// }
// char	*clean(char	*storage)
// {
// 	char	*storage_new = NULL;
// 	char	*found_char;
// 	int		len;
	
// 	if (!(found_char = ft_strchr(storage, '\n')))
// 		return (free(storage), NULL);
// 	len = found_char - storage + 1;
// 	storage_new = ft_substr(storage, len, ft_strlen(storage) - len);
// 	free(storage);
// 	return (storage_new);
// }
char	*clean(char *remainder)
{
	char	*new_remainder;
	char	*newline_pos;

	newline_pos = ft_strchr(remainder, '\n');
	if (!newline_pos || !newline_pos[1])
	{
		free(remainder);
		return (NULL);
	}
	new_remainder = ft_strjoin(newline_pos + 1, "");
	free(remainder);
	return (new_remainder);
}

// char	*clean(char *storage)
// {
// 	char	*storage_new = NULL;
// 	char	*found_char;
// 	int		len;
	
// 	found_char = ft_strchr(storage, '\n');
// 	if (!found_char)
// 	{
// 		free(storage);
// 		return (NULL);
// 	}
// 	len = (found_char - storage) + 1;
//     //printf("storage: %s end\n", storage);
// 	storage_new = ft_substr(storage, len, ft_strlen(storage) - len);
//     //printf("new storage: %s end2\n", storage_new);
// 	free(storage);
// 	return(storage_new);
// }

char *get_next_line(int fd)
{
	static char	*buffer = NULL;
	char	*line = NULL;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	// if (!buffer)
	// 	buffer = malloc(sizeof(BUFFER_SIZE * 1));
	// if (!buffer)
	// {
	// 	free(buffer);
	// 	return (NULL);
	// }
	if (!ft_strchr(buffer, '\n') || !buffer)
	{
		buffer = read_buffer(fd, buffer);
		// printf("Buffer value: (%s)\n", buffer);
		if (!buffer)
			return (NULL);
	}
	line = add_line(buffer);
	if (!line)
	{
		free(buffer);
		return (NULL);
	}
	buffer = clean(buffer);
	// printf("\nbuffer: %s hola\n", buffer);
	return (line);
}

int main(void)
{
	static char	*str = NULL;
	int	fd = open("ex.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	printf("%s\n", get_next_line(fd));
	// printf("%s\n", get_next_line(fd));
	// printf("%s\n", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
    // printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
    // printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	close (fd);
	return 0;
}

// int main(void)
// {
// 	char	*str = "hola";
// 	int	fd = open("ex.txt", O_RDONLY);
// 	char	*str2 = read_buffer(fd, str);
// 	printf("%s", str2);
// 	return 0;
// }
