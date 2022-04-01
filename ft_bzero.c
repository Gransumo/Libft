/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:08:05 by gcastro-          #+#    #+#             */
/*   Updated: 2021/11/05 14:08:06 by gcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*x;
	int				i;

	x = s;
	i = 0;
	while (n > 0)
	{
		x[i] = '\0';
		i++;
		n--;
	}
}
