
#include "libft.h"


int len_num(int n)
{
    int num_len;

    num_len = 0;
    while(n / 10 > 0)
    {
        
    }
    return (num_len);
}
char *ft_itoa(int n)
{
    int num_len;

    num_len = 0;
    if (!n)
        return (ft_strdup("\0"));
    if (n < 0)
        num_len += 1;
    char *s1 = (char *)ft_malloc();
}
