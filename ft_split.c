
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	num_words(char const *s, char c)
{
	int	i;
	int	x;

	x = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			x++;
		i++;
	}
	return (x);
}

size_t wrd_len(char *s, char c, int index)
{

}

char **ft_split(char const *s, char c)
{
	char	**matrix;
	int		i;

	i = 0;
	matrix = (char **)malloc(sizeof(char) * (num_words(s, c) + 1));
	while (i <= num_words(s, c))
	{
		*matrix[i] = (char) malloc (wrd_len(s, c, i));
		i++;
	}


}

int main()
{
	char s[] = "muy bien creo que te mueres";
	printf("%i\n", num_words(s, 'e'));
}



