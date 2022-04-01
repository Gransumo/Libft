
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	num_words(char const *s, char c)
{
	int	i;
	int	x;

	x = 0;
	i = 0;
	while(s[i] == c)
		i++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i] != '\0')
		{
			x++;
			while (s[i] == c && s[i] != '\0')
				i++;
		}
		i++;
	}
	if(s[ft_strlen(s) - 1] != 'c')
		x++;
	return (x);
}

static size_t wrd_len(char const *s, char c, int index)
{
	int		i;
	size_t	len;

	len = 0;
	i = 0;
	if (s[i] == c)
		i++;
	while ((index != 0))
	{
		if (s[i] != c && s[i - 1] == c)
			index--;
		if (index != 0)
			i++;
	}
	while (s[i] != c && s[i] != '\0')
	{
		len++;
		i++;
	}
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

	i = 0;
	if (!s)
		return ((char **)ft_strdup("\0"));
	matrix = (char **)malloc(sizeof(char *) * (num_words(s, c) + 1));
	while (i < num_words(s, c))
	{
		matrix[i] = (char *) malloc (wrd_len(s, c, i));
		if (matrix[i] == NULL)
		{
			ft_free(matrix, i);
			return(0);
		}
		matrix[i] = asign_value(s, c, i);
		i++;
	}
	matrix[i] = ft_strdup("\0");
	return(matrix);
}
