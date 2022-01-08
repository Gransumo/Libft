/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcastro- <gcastro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:34:47 by gcastro-          #+#    #+#             */
/*   Updated: 2021/11/26 18:47:40 by gcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	*ft_memset(void *s, int x, size_t y)
{
	unsigned char	*i;
	int				j;

	i = s;
	j = 0;
	while (y > 0)
	{
		i[j] = x;
		j++;
		y--;
	}
	return (i);
}
