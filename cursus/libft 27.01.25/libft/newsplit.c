#include "libft.h"

static int	num_substrs(char const *s, char c)
{
	int	num;

	num = 0;
	if (!s)
	{
		return (NULL);
	}
	while (*s)
	{
		while (*s == c)
		{
			s++;
			if (*s != '\0')
			{
				num++;
				while (*s && *s != c)
				{
					s++;
				}
			}
		}
	}
	return (num);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		len;

	
