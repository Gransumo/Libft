
#include "libft.h"
#include <stdio.h>

int	len_num(int n)
{
    int	num_len;

    num_len = 0;
    if (n < 0)
    {
        n *= -1;
        num_len++;
    }
    while(n / 10 > 0)
    {
        num_len++;
        n /= 10;
    }
    return (num_len + 1);
}

/* char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	dividir;

	dividir = n;
	i = len_num(dividir) - 1;
	str = malloc(sizeof(char) * (len_num(dividir) + 1));
	if (str == 0)
		return (0);
	if (dividir == -0)
		str[0] = '0';
	else if (dividir < 0)
	{
		str[0] = '-';
		dividir = dividir * -1;
	}
	while (dividir > 0)
	{
		str[i] = (dividir % 10) + '0';
		dividir = dividir / 10;
		i--;
	}
	str[len_num(n) - 1] = '\0';
	return (str);
}
 */

/* char	*ft_itoa(int n)
{
    int		i;
    long		x;
    char	*s1;

    x = n;
    i = len_num(x) - 1;
    if (!n)
        return (ft_strdup("\0"));
    s1 = malloc(sizeof(char) * (len_num(n) + 1));
    if (!s1)
        return (0);
    if (n < 0)
    {
        s1[0] = '-';
        x *= -1;
    }
	printf("%i", len_num(n));
    while (x > 0)
    {
        s1[i] = x % 10 + '0';
        x /= 10;
		i--;
    }
    s1[len_num(n) - 1] = '\0';
    return (s1);
}
 */
int main()
{
    int i = -123456789;
    printf("%i\n", len_num(i));
    printf("%s\n", ft_itoa(i));

    return(0);
}
