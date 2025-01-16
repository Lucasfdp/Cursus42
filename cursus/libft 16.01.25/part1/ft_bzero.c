/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:28:51 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/15 19:12:24 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}

void	ft_bzero(void *s, unsigned int n)
{
	ft_memset(s, 0, n);
}
/*	unsigned char	*ptr;
	ptr = s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}

int	main(void)
{
	char	str[] = "String";
	unsigned int	n = 1;

	printf("%s\n", str);
	ft_bzero(str, n);
	printf("Should be blank: %s", str);
	return (0);
}*/
