/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:28:51 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/30 18:49:35 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//bzero: function to fill the memory pointed to by s with 0's n times
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);//memset fills memory of s with 0's n times
}

// int	main(void)
// {
// 	char	str[] = "String";
// 	unsigned int	n = 1;

//  	printf("%s\n", str);
//  	ft_bzero(str, n);
//  	printf("Should be blank: %s", str);
// 	return (0);
// }