/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:24:46 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/18 13:29:08 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_ptr;
	const unsigned char	*src_ptr;
	unsigned int		i;

	dest_ptr = dest;
	src_ptr = src;
	i = 0;
	while (i < n - 1)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	dest_ptr[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	const unsigned char	src[] = "I want a longer string";
	unsigned char dest[10];
	unsigned int	n = 10;

	printf("Before memmove: %s\n", dest);
	ft_memmove(dest, src, n);
	printf("After memmove: %s", dest);
	return (0);
}*/
