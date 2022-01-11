
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	num_words(char const *s, char c)
{
	int	i;
	int	x;

	x = 0;
	i = 0;
	while(s[i] == c)
		i++;	
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			x++;
		}
		i++;
	}
	return (x);
}

size_t wrd_len(char *s, char c, int index)
{
	int		i;
	size_t	len;

	len = 0;
	i = 0;
	while ((index != 0))
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			index--;
		}
		i++;
	}
	while (s[i] != c)
	{
		len++;
		i++;
	}
	return(len);
}

void liberar(char  **matrix, int index)
{
	while (index != 0)
	{
		free(*matrix[index]);
		index--;
	}
	free(matrix);
}

char	*asign_value(char const *s, char c, int index)
{
	int		i;
	char	*dest;

	dest = malloc (wrd_len(s, c, index));
	while (index != 0)
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			index--;
		}
		
	}
	

	return(dest);
}

char **ft_split(char const *s, char c)
{
	char	**matrix;
	int		i;

	i = 0;
	if (!s)
		return (ft_strdup("\0"));
	matrix = (char **)malloc(sizeof(char) * (num_words(s, c) + 2));
	while (i <= num_words(s, c) + 1)
	{
		*matrix[i] = (char) malloc (wrd_len(s, c, i));
		if (*matrix[i] == NULL)
			liberar(matrix, i);
		*matrix[i] = asign_value(s, c, i);
		i++;
	}
	return(matrix);
}

int main()
{
	char s[] = "muy bien creo que te mueres";
	char **matrix;
	int i;
	int j;

	j = 0;
	i = 0;
	matrix = ft_split(s, 'e');
	while (i != '\0')
	{
		/* code */
	}
	

}
