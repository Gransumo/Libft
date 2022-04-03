
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *new;

    if (s1 == NULL || s2 == NULL)
        return (0);
    new = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (new == NULL)
        return (0);
    ft_strlcpy(new, s1, ft_strlen(s1) + 1);
    ft_strlcat(new, s2, ft_strlen(s1) + ft_strlen(s2) + 1);

    return (new);
}
