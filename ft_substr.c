

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *x;
    int i;

    i = 0;
    x = (char *) malloc(len + 1);
    if (x == NULL)
        return (0);
    if (start >= ft_strlen(s))
        ft_strlcpy(x, s + start - 1, len + 1);
    else
        ft_strlcpy(x, s + start, len + 1);
    return (x);
}

/* int main()
{
    char s[] = "hola que tal";

    printf("%s\n", ft_substr(s, 400, 20));   

    return(0);
} */
