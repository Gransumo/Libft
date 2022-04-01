
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*setdup(char const *set)
{
	size_t	i;
	size_t	j;
	char	*newSet;

	newSet = (char *) malloc(sizeof(set));
	i = 0;
	j = 0;
	while(set[i] != '\0')
	{
		if (ft_strchr(&set[i + 1], set[i]) != NULL)
			i++;
		else
		{
			newSet[j] = set[i];
			j++;
			i++;
		}
	}
	newSet[j] = '\0';
	return (newSet);
}

size_t	numRepeat(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	r;

	r = 0;
	j = 0;
	i = 0;
	while (set[i] != '\0')
    {
		while (s1[j] != '\0')
		{
			if (s1[j] == set[i])
				r++;
			j++;
		}
		j = 0;
    	i++;
	}
	return (r * sizeof(char));
}

char	*getValues(char const *s1, char const *set, char *new)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if (ft_strchr(set, s1[i]) != 0)
			i++;
		else
		{
			new[j] = s1[i];
			i++;
			j++;
		}
	}
	new[j] = '\0';
	return (new);
}

char	*ft_strtrimFALSE(char const *s1, char const *set)
{
    char	*new;
	char	*newSet;
	size_t	r;

	if (!s1)
		return (0);
	newSet = setdup(set);
	r = numRepeat(s1, newSet);
    new = (char *) malloc(ft_strlen(s1) - r + 1);
	if (new != NULL)
		new = getValues(s1, newSet, new);
	return (new);
}

/* int main()
{
	char	s1[] = "lorem ipsum dolor sit amet";
	char	set[] = "tel";
	size_t	repetidos;

	repetidos = numRepeat(s1, setdup(set));
	printf("%i\n", (int)sizeof(s1));
	printf("%s\n", setdup(set));
	printf("%i\n", (int)repetidos);
	printf("%s\n", ft_strtrim(s1, set));

	return (0);
} */