/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:55:52 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/14 13:34:15 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	src[] = "Hello there";
	char	buffer[20];
	unsigned int	size = 20;

	char	result;
	result = strlcpy(buffer, src, size);
	printf("%c", result);
	return (0);
}
/*
int	main()
{
	char	a;
	char	b;
	char	c;

	a = 'a';
	b = 'g';
	c = 'A';

	char	resulta = toupper(a);
	printf("%c\n", resulta);
	char	resultb = toupper(b);
	printf("%c\n", resultb);
	char	resultc = toupper(c);
	printf("%c", resultc);
	return (0);
}
	if (isalpha(c))
	{
		printf("Is alphabetical\n");
	}
	else 
	{
		printf("Is not alphabetical\n");
	}
	if (isalpha(b))
	{
 			printf("Is alphabetical\n");
	}
 	else
 	{
			printf("Is not alphabetical\n");
	}
	if (isalpha(a))
	{
 			printf("Is alphabetical\n");
 	}
	else 
	{
		printf("Is not alphabetical\n");
	}
	return (0);
}
	printf("%d\n", isalpha(c));
	printf("%d\n", isalpha(b));
	printf("%d", isalpha(a));
	return (0);
}*/
