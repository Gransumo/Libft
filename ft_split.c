#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static	int	num_words(char const *str, char caracter)
{
	int	count;
	size_t	alerta;
	size_t	i;

	count = 0;
	alerta = 1;
	i = 0;
	if (str == 0)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == caracter)
			alerta = 1;
		else if (alerta == 1)
		{
			alerta = 0;
			count++;
		}
		i++;
	}
	return (count);
}

/* static size_t wrd_len(char const *s, char c, int index)
{
	int		i;
	size_t	len;

	len = 0;
	i = 0;
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
} */

static	size_t	wrd_len(char const *str, char caracter, size_t pos)
{
	size_t	i;
	size_t	count;
	size_t	word;

	i = 0;
	count = 0;
	word = 0;
	while (str[i] && word <= pos)
	{
		if (pos == word && str[i] != caracter)
			count++;
		if ((str[i] == caracter) && (str[i + 1] != caracter))
			word++;
		i++;
	}
	return (count);
}

static void ft_free(char  **matrix)
{
	size_t	i;
	
	i = 0;
	while (matrix[i])
	{
		free(matrix[i]);
		i++;
	}
	free (matrix);
}

/* static void	get_value(char const *s, char c, int index, char *dest)
{
	int		i;
	size_t	len;

	if (!dest)
		return (void)(0);
	len = wrd_len(s, c, index) + 1;
	i = 0;
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
	ft_strlcpy(dest, &s[i], len);
} */

static	void	copy_words(const char *cadena, char **str, char c)
{
	int	x;
	size_t	y;
	int	i;

	x = 0;
	y = 0;
	while (x < num_words(cadena, c))
	{
		i = 0;
		while (y < ft_strlen(cadena))
		{
			if (cadena[y] == c && cadena[y + 1] != c)
				break ;
			if (cadena[y] != c)
			{	
				str[x][i] = cadena[y];
				i++;
			}
			y++;
		}
		str[x][i] = '\0';
		x++;
		y++;
	}
	str[x] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		i;
	char 	*s1;

	i = 0;
	s1 = ft_strtrim(s, &c);
	matrix = malloc(sizeof(char *) * (num_words(s1, c) + 1));
	while (i < num_words(s1, c))
	{
		matrix[i] = malloc (wrd_len(s1, c, i) + 1);
		if (matrix[i] == NULL)
		{
			ft_free(matrix);
			free(s1);
			return(0);
		}
		i++;
	}
	copy_words(s1, matrix, c);
	free(s1);
	return(matrix);
}

/* int main()
{
	char *s = "";
	int i;
	char **matrix;

	i = 0;
	matrix = ft_split(s, 'v');
	while (matrix[i] != NULL)
	{	
		printf("%s\n", matrix[i]);
		i++;
	}
	return (0);
} */