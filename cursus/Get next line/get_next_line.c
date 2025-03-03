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
    char   *temp;
	
	red = 1;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
	{
		free(buffer);
		free(storage);
		return (NULL);
	}
	while ((red = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
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

char	*add_line(char *storage)
{
	char	*line = NULL;
	char	*found_char;
	int		len;

	if(!(found_char = ft_strchr(storage, '\n')))
	{
		len = ft_strlen(storage);
		line = ft_substr(storage, 0 , len + 1);
	}
	else
	{
		len = (found_char - storage);
		line = ft_substr(storage, 0 , len + 1);
	}
	if (!line)
	{
		free(line);
		free(storage);
		return (NULL);
	}
	return (line);
}

//function to clean storage after \n is found and the line is written
char	*clean(char *storage)
{
	char	*storage_new = NULL;
	char	*found_char;
	int		len;
	
	found_char = ft_strchr(storage, '\n');
	if (!found_char)
	{
		free(storage);
		return (NULL);
	}
	len = (found_char - storage) + 1;
    //printf("storage: %s end\n", storage);
	storage_new = ft_substr(storage, len, ft_strlen(storage) - len);
    //printf("new storage: %s end2\n", storage_new);
	free(storage);
	return(storage_new);
}

char *get_next_line(int fd)
{
	static char	*buffer;
	char	*line = NULL;

	if (!buffer)
		buffer = malloc(sizeof(BUFFER_SIZE * 1));
	if (!buffer)
	{
		free(buffer);
		return (NULL);
	}
	if (!ft_strchr(buffer, '\n'))
		buffer = read_buffer(fd, buffer);
	if (!buffer)
		return (NULL);
	line = add_line(buffer);
	if (!line)
	{
		free(buffer);
		return (NULL);
	}
	buffer = clean(buffer);
    //printf("\nbuffer: %s hola\n", buffer);
	return (line);
}

int main(void)
{
	int	fd = open("ex.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
    printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	close (fd);
	return 0;
}