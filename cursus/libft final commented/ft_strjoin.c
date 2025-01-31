/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 16:49:07 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/31 16:27:37 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strjoin: function to concatenate 2 strings and save them in a new string
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joint_str;//pointer variable to store value of malloc

	joint_str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);//allocates memory for the length of each string + 1 for '\0'
	if (!joint_str)//check for failed allocation
	{
		return (NULL);
	}
	ft_memmove(joint_str, s1, ft_strlen(s1));//uses memmove to copy string s1 to the pointer variable
	ft_memmove(joint_str + ft_strlen(s1), s2, ft_strlen(s2) + 1);//uses memmove to copy string s2 to the pointer variable but starting from the end of s1
	return (joint_str);//returns the pointer to the new string 
}
/*
int	main(void)
{
	char	str1[] = "General ";
	char	str2[] = "Kenobi";
	char	*join = ft_strjoin(str1, str2);
	printf("%s", join);
	free(join);
	return (0);
}*/