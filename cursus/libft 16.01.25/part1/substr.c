/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luferna3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:51:45 by luferna3          #+#    #+#             */
/*   Updated: 2025/01/15 17:51:51 by luferna3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

// Updated ft_strlen to accept const char * (to handle string literals)
int ft_strlen(const char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

// Function to extract a substring
char *ft_substr(const char *s, unsigned int start, size_t len)
{
    size_t str_len;
    size_t substr_len;
    char *substr;
    size_t i;

    // Check for NULL string or invalid start position
    if (s == NULL)
    {
        printf("Error: input string is NULL.\n");
        return NULL;
    }
    
    str_len = ft_strlen(s);
    if (start >= str_len)
    {
        printf("Error: start index is greater than or equal to the string length.\n");
        return NULL;
    }

    printf("String length: %zu\n", str_len);

    // Calculate the substring length considering string bounds
    if (str_len < len + start)
    {
        substr_len = str_len - start;
    }
    else
    {
        substr_len = len;
    }

    printf("Requested substring length: %zu\n", substr_len);

    // Allocate memory for the substring (+1 for the null terminator)
    substr = malloc(substr_len + 1);
    if (substr == NULL)
    {
        printf("Memory allocation failed.\n");
        return NULL;  // Return NULL if malloc fails
    }

    // Copy the substring into the allocated memory
    for (i = 0; i < substr_len; i++)
    {
        substr[i] = s[start + i];
    }

    // Null-terminate the substring
    substr[substr_len] = '\0';

    return substr;
}

int main()
{
    const char str[] = "General Kenobi";
    unsigned int start = 4;
    size_t len = 5;

    printf("Original string: %s\n", str);

    char *substring = ft_substr(str, start, len);

    // Check if memory allocation failed
    if (substring == NULL)
    {
        printf("Failed to extract substring.\n");
    }
    else
    {
        printf("Substring: %s\n", substring);
    }

    // Free the allocated memory for the substring
    free(substring);
    return 0;
}

