/*
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);
*/


#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int len = 0;
    while (src[len])
        len++;
    char *str = malloc(len +1);
    len = -1;
    while (src[++len])
        str[len] = src[len];
    str[len] = '\0';
    return (str);
}
