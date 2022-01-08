/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcastro- <marvin@42.fr>					+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:43:18 by gcastro-          #+#    #+#             */
/*   Updated: 2021/11/17 18:43:18 by gcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	lenDest;
	size_t	lenSrc;

	lenDest = ft_strlen(dest);
	lenSrc = ft_strlen(src);
	if (!dest || !src)
		return (0);
	if (size < lenDest)
		return (lenSrc + size);
	else
	{
		dest = dest + lenDest;
		ft_strlcpy(dest, src, size - lenDest);
		return (lenDest + lenSrc);
	}
}
