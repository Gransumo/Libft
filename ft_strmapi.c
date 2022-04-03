#include <stdio.h>
#include <unistd.h>
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char            *s1;

    i = 0;
    if (!s)
        return (0);
    s1 = malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (s1 == 0)
        return (0);
    while (s[i] != '\0')
    {
        s1[i] = (*f)(i, s[i]);
        i++;
    }
    s1[i] = '\0';
    return (s1);
}
