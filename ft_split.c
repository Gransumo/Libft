
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	num_words(char const *s, char c)
{
	int	i;
	int	x;

	x = 0;
	i = 0;
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
	return (x + 1);
}

static size_t wrd_len(char const *s, char c, int index)
{
	int		i;
	size_t	len;

	len = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (index > -1)
	{
		if (s[i] != c)
		{
			index--;
			if (index == -1)
				break;
			while (s[i] != c)
				i++;
		}
		i++;
	}
	while (s[i + (int)len] != c && s[i + (int)len] != '\0')
		len++;
	return(len);
}

static void ft_free(char  **matrix, int index)
{
	while (index != 0)
	{
		free(matrix[index]);
		index--;
	}
	free(matrix);
}

static char	*asign_value(char const *s, char c, int index)
{
	int		i;
	char	*dest;
	size_t	len;

	len = wrd_len(s, c, index);
	i = 0;
	dest = (char *) malloc (wrd_len(s, c, index));
	while (s[i] == c)
		i++;
	while (index != 0)
	{
		i++;
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			index--;
		}
	}
	ft_strlcpy(dest, &s[i], len + 1);
	return(dest);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!s)
		return ((char **)ft_strdup("\0"));
	s = ft_strtrim(s, &c);
	matrix = (char **)malloc(sizeof(char *) * (num_words(s, c) + 1));
	while (i < num_words(s, c))
	{
		matrix[i] = (char *) malloc (wrd_len(s, c, i) + 1);
		if (matrix[i] == NULL)
		{
			ft_free(matrix, i);
			return(0);
		}
		matrix[i] = asign_value(s, c, i);
		i++;
	}
	printf("Aqui i vale %i\n", i);
	i -= 1;
	printf("Despues i vale %i\n", i);
	matrix[i] = ft_strdup("\0");
	return(matrix);
}

int main()
{
	int i;

	i = 0;
	char const *s = ",,,,hola, tio, que tal , men, quiero, verte,,,";
	char **matrix;

	i = 0;
	matrix = ft_split(s, ',');
	s = ft_strtrim(s, ",");
	//printf("Hay %i palabras\n", num_words(s, ','));
	/* while(matrix[i] != ft_strdup("\0"))
	{
		printf("%s\n", matrix[i]);
		i++;
	}  */
	ft_free(matrix, num_words(s, ','));
	return(0);
} 

