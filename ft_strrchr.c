/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcastro- <marvin@42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:43:29 by gcastro-          #+#    #+#             */
/*   Updated: 2021/11/17 18:43:29 by gcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	size_t	x;
	size_t	i;

	i = 0;
	x = ft_strlen ((char *)s);
	p = 0;
	while (i != x + 1)
	{
		if (*s == c)
			p = (char *) s;
		s++;
		i++;
	}
	return ((char *) p);
}
