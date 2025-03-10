//#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*result;
	size_t		str_len;
	unsigned int	i;
	
	if (!s || !f)
	str_len = ft_strlen(s);
	result = malloc(str_len + 1 * sizeof(char));
	if (!result)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		result[i] = f(i , s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	ft_ex_func(unsigned int i, char c)
{
	if (i % 2 == 0)
	{
		return (tolower(c));
	}
	return (toupper(c));
}

int	main(void)
{
	char	str[] = "General Kenobi";
	char	*result = ft_strmapi(str, ft_ex_func);

	if (result)
	{
		printf("The original string: %s\n", str);
		printf("The string after applying function: %s", result);
		free(result);
	}
	return (0);
}

