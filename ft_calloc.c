#include <stdlib.h>
#include "libft.h"
void    *ft_calloc(size_t nmemb, size_t size)
{
    unsigned char *x;

    x = (unsigned char *) malloc(nmemb * size);
    if (x == NULL)
        return (0);
    x = ft_memset(x, 0, nmemb * size);
    return (x);
}
