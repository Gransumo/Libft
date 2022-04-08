/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:41:48 by gcastro-          #+#    #+#             */
/*   Updated: 2022/04/08 18:41:49 by gcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c, int fd)
{
	write (fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{	
		ft_putchar ('-', fd);
		ft_putchar ('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar ('-', fd);
		n = -n;
	}
	if (n <= 9 && n >= 0)
		ft_putchar (n + '0', fd);
	else
	{
		ft_putnbr_fd (n / 10, fd);
		ft_putnbr_fd (n % 10, fd);
	}
}
