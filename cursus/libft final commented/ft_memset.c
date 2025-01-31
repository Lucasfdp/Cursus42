/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 12:36:47 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 15:08:19 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//memset: function to fill memory with a constant byte (same character) n times

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;//used to hold the value of s(pointer to the memory)
	size_t			i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;//copies the char to the memory pointed to by ptr unti i > n using a cast
		i++;
	}
	return (ptr);//returns pointer to memory filled
}

// int	main(void)
// {
// 	char	str[] = "string";
// 	char	c = 'a';
// 	size_t	n = 10;

// 	printf("Before memset: %s\n", str);
// 	ft_memset(str, c, n);
// 	printf("After memset: %s", str);
// 	return (0);
// }