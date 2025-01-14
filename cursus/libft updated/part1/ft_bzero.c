/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 18:28:51 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/14 18:46:59 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, unsigned int n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}
int	main()
{
	char	str[] = "String";
	unsigned int	n = 1;

	printf("%s\n", str);
	bzero(str, n);
	printf("Should be blank: %s", str);
	return (0);
}
