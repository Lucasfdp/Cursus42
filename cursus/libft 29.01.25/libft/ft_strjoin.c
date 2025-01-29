/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <luferna3@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 16:49:07 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/29 19:58:06 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joint_str;

	joint_str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!joint_str)
	{
		return (NULL);
	}
	ft_memmove(joint_str, s1, ft_strlen(s1));
	ft_memmove(joint_str + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (joint_str);
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