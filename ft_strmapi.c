
#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    char            *s1;

    s1 = malloc(sizeof(char) * (ft_strlen(s) + 1));
    i = 0;
    while (s1[i] != '0')
    {
        s1[i] = (*f)(i, s1[i]);
        i++;
    }
    s1[i] = '\0';
    return (s1);
}
