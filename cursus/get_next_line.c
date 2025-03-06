#include "get_next_line.h"

char	*read_buffer(int fd, char *storage)
{
	char	*buffer;
	int		readed;

	if (!storage)
		storage = ft_calloc(sizeof(char), 1);
	buffer = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	readed = 1;
	while (!ft_strchr(buffer, '\n') && readed != 0)
	{
		readed = read(fd, buffer, BUFFER_SIZE);
		if (readed == -1)
			return (free(storage), free(buffer), NULL);
		storage = ft_strjoin(storage, buffer);
	}
	free(buffer);
	return (storage);
}

char	*add_line(char *buffer)
{
	char	*line;
	int		i;

	if (!buffer[0])
		return (NULL);
	i = 0;
	while (buffer[i] != '\0' && buffer[i] != '\n')
		i++;
	line = ft_substr(buffer, 0, i);
	if (buffer[i] == '\n')
		line[i] = buffer[i];
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
		//free(storage);
		return (free(storage), NULL);
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

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
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
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	close (fd);
	return 0;
}