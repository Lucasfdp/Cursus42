/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 13:07:06 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/15 19:01:43 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	const unsigned char	*src_ptr;
	unsigned int	i;

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
/*
int	main(void)
{
	unsigned char	src[] = "String";
	unsigned char	dest[10];
	size_t	n = 1;

	printf("Before memcpy: %s\n", dest);
	ft_memcpy(dest, src, n);
	printf("After memcpy: %s", dest);
	return (0);
}*/
