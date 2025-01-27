#include <stdlib.h>
#include <stdio.h>

static int num_substrs(char const *s, char c)
{
    int num = 0;

    while (*s)
    {
        while (*s == c)
        {
            s++;
        }
        if (*s != '\0') // Start of a substring
        {
            num++;
        }
        while (*s && *s != c) // Skip the current substring
        {
            s++;
        }
    }
    return num;
}

static char *ft_strndup(const char *s, size_t n)
{
    size_t i;
    char *new;

    if (s == NULL)
    {
        return NULL;
    }
    new = malloc(n + 1);  // Allocate space for n characters + null terminator
    if (new == NULL)
    {
        return NULL;
    }
    i = 0;
    while (i < n)
    {
        new[i] = s[i];
        i++;
    }
    new[i] = '\0';  // Null-terminate the string
    return new;
}
char **ft_split(char const *s, char c)
{
    char **result;
    char const *start;
    int i = 0;

    if (!s) // Handle NULL input string
        return (NULL);

    if (*s == '\0') // Handle empty string
    {
        result = malloc(sizeof(char *)); // Allocate space for a single NULL pointer
        if (result)
            result[0] = NULL;
        return (result);
    }

    result = malloc((num_substrs(s, c) + 1) * sizeof(char *));
    if (!result) // Memory allocation check
        return (NULL);

    while (*s)
    {
        while (*s == c) // Skip delimiters
            s++;

        if (*s) // Found a valid substring
        {
            start = s;
            while (*s && *s != c) // Skip to the next delimiter
                s++;

            result[i] = ft_strndup(start, s - start);
            if (!result[i]) // Memory allocation failure
            {
                while (i > 0)
                {
                    free(result[--i]);
                }
                free(result);
                return (NULL);
            }
            i++;
        }
    }

    result[i] = NULL; // Null-terminate the result array
    return (result);
}
/*
char **ft_split(char const *s, char c)
{
    char **result;
    char const *start;
    int i = 0;

    if (!s)  // Handle NULL input string
        return NULL;
    
    if (*s == '\0')  // Handle empty string
    {
        result = malloc(sizeof(char *));  // Allocate space for a single NULL pointer
        if (result)
            result[0] = NULL;
        return result;
    }

    result = malloc((num_substrs(s, c) + 1) * sizeof(char *));
    if (!result)  // Memory allocation check
        return NULL;

    while (*s)
    {
        while (*s == c)  // Skip delimiters
            s++;
        
        if (*s)  // Found a valid substring
        {
            start = s;
            while (*s && *s != c)  // Skip to the next delimiter
                s++;

            result[i] = ft_strndup(start, s - start);
            if (!result[i])  // Memory allocation failure
            {
                while (i > 0)
                {
                    free(result[--i]);
                }
                free(result);
                return NULL;
            }
            i++;
        }
    }

    result[i] = NULL;  // Null-terminate the result array
    return result;
}
*/
int main(void)
{
    // Test the split function with an empty string
    char **result = ft_split("hdhdjjf sjssgs jddgaga ajahg dhdhs shs shs s s s ", ' ');

    if (result)  // If memory was allocated
    {
        int i = 0;
        while (result[i])  // Print the result substrings
        {
            printf("Substring %d: %s\n", i, result[i]);
            free(result[i]);  // Free each substring
            i++;
        }
        free(result);  // Free the result array itself
    }

    return 0;
}

