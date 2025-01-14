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
	unsigned int	i;

	i = 0;
	while (str[i] != '\0' && i <= n)
	{
		str[i] = '\0';
		i++;
	}
	return;
}
int	main()
{
	char	str[] = "String";
	unsigned int	n = 2;

	printf("%s", str);
	ft_bzero(str, n);
	printf("%s", str);
	return (0);
}
