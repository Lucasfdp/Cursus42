/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:25:20 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/27 16:48:08 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
	size_t	nmemb = 30;
	size_t	size = sizeof(int);
	int	*arr = ft_calloc(nmemb, size);
	size_t	i = 0;

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
