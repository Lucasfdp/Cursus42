/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:24:46 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/24 16:25:46 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*dest_ptr;
	const unsigned char		*src_ptr;
	unsigned int			i;

	dest_ptr = dest;
	src_ptr = src;
	i = 0;
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;
	unsigned int		i;

	dest_ptr = dest;
	src_ptr = src;
	if (!src || !dest)
	{
		return (NULL);
	}
	i = 0;
	if (dest_ptr >= src_ptr)
	{
		i = n;
		while (i > 0)
		{
			dest_ptr[i - 1] = src_ptr[i - 1];
			i--;
		}
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}
/*
int	main(void)
{
	const unsigned char	src[] = "consipsum dolor sit a";
	unsigned char		dest[20];
	unsigned int		n = 20;

	printf("Before memmove: %s\n", dest);
	ft_memmove(dest, src, n);
	printf("After memmove: %s", dest);
	return (0);
}*/
