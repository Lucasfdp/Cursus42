/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:02:38 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/14 16:47:31 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, unsigned int len)
{
	unsigned int	x;
	unsigned int	y;


	if (*little == '\0')
	{
		return (char *)big;
	}
	x = 0;
	while (big[x] != '\0' && x <= len -1)
	{
		if (big[x] == little[0])
		{
			while (big[x + y] == little[y] && little[y] != '\0')
			{
				y++;
			}
			if (little[y] == '\0')
			{
				return (char *)(big + x);
			}
		}
		x++;
	}
	return (NULL);
}

int	main()
{
	char	big[] = "Why hello there";
	char	little[] = "Wh";
	unsigned int	len = 1;
	char	*string = ft_strnstr(big, little, len);

	if (string)
	{
		printf("%s", string);
	}
	else 
	printf("No string found");
	return (0);
}
