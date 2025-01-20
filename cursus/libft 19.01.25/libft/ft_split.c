/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 14:41:24 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/20 16:35:50 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split(char const *s, char c)
{
	char const	*substart;
	char		**result;
	int			substrs;
	int			i;
	int			j;
	size_t		len;

	i = 0;
	j = 0;
	if (!*s)
	{
		return (NULL);
	}
	substrs = num_substrs(s1, c);
	result = malloc((substrs + 1) * (sizeof(char *)))
	if (!result)
	{
		return (NULL);
	}
	while (*s)
	{
		if (*s == c)
		{
			s++;
		}
		substart = s;
		while (*s && s != c)
		{
			s++;
		}
		if (substart != s)
		{
			result[i] = strdup(start)
}

int	num_substrs(char const *s, char c)
{
	int	num;

	count = 0;
	while (*s)
	{
		while (*s == c)
		{
			s++;
		}
		if (*s != '\0')
		{
			num++;
		}
		while (*s && *s != c)
		{
			s++;
		}
	}	
	return (num);
}

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*new;

	if (s == NULL)
	{
		return (NULL);
	}
	len = ft_strlen(s) + 1;
	new = malloc(len);
	if (new == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s[i] != '\0')
	{
		new[i] = s[i];
		i++;
	}
	return (new);
}
