/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcastro- <marvin@42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:43:27 by gcastro-          #+#    #+#             */
/*   Updated: 2021/11/17 18:43:27 by gcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"
char	*ft_strnstr(char *str, char *to_find, size_t len)
{
	size_t		i;
	size_t		j;
	char	*dest;

	i = 0;
	j = 0;
	dest = 0;
	if (!to_find)
		return (str);
	while (len > i)
	{
		if (str[i] == to_find[j])
			j++;
		else if (to_find[j] == '\0')
			return ((char *)str + i - j);
		else if (str[i] != to_find[j])
			j = 0;
		i++;
	}
	if (j == 0 || len == 0)	
		dest = NULL;
	return (dest);
}

/* int main()
{
	char s1[] = "lorem ipsum dolor sit amet";
	char s2[] = "consectetur";

	printf("%s", ft_strnstr(s1, s2, 27));

	return(0);
} */
