#include <stdio.h>
#include <ctype.h>

void	ft_striteri(char *s, void (*f) (unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
	{
		return;
	}
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

void    ft_ex_func(unsigned int i, char *c)
{
        if (i % 2 == 0)
        {
                *c = (toupper(*c));
        }
	else
	{
		*c = tolower(*c);
	}
}
/*
void ft_ex_func(unsigned int i, char *c) 
{
    if (i % 2 == 0) 
    {
        *c = *c - 32;
    }
}
*/
int	main(void)
{
	char	str[] = "General Kenobi";
	
	ft_striteri(str, ft_ex_func);
	printf("%s", str);
	return (0);
}
