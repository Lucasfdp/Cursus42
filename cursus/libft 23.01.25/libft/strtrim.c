
#include <stdio.h>
#include <stdlib.h>

int	ft_inset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

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

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*trimmed;

	start = 0;
	while (*s1 && ft_inset(s1[start], set))
	{
		start++;
	}
	end = ft_strlen(s1);
	while (end > start && ft_inset(s1[end], set))
	{
		end--;
	}
	trimmed = malloc((end - start + 1) * sizeof(s1));
	if (!trimmed)
	{
		return (NULL);
	}
	i = 0;
	while (end > start)
	{
		trimmed[i] = s1[start];
		i++;
		start++;
	}
	trimmed[i] = 0;
	return (trimmed);
}

int	main(void)
{
	char	*str = "   General   ";
	char	*set = " ";
	char	*result = ft_strtrim(str, set);

	if (result)
	{
		printf("Trimmed string is: %s", result);
	}
	free(result);
	return (0);
}

