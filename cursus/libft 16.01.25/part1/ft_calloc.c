/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:25:20 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/15 19:23:00 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memset(ptr, 0, nmemb * size);
	return (ptr);
}
/*
int	main(void)
{
	size_t	nmemb = 20;
	size_t	size = sizeof(int);
	int	*arr = ft_calloc(nmemb, size);
	int	i = 0;

	if (arr == NULL)
	{
		printf("Failed");
	}
	while (i < nmemb)
	{
		printf("%d", arr[i]);
		i++;
	}
	free(arr);

	return (0);
}*/
