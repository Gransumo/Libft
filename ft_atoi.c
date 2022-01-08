/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcastro- <gcastro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:42:47 by gcastro-          #+#    #+#             */
/*   Updated: 2022/01/08 17:43:55 by gcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	varInt[2];

	varInt[0] = 0;
	varInt[1] = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == 45 || *str == 43)
	{
		if (*str == 45)
			varInt[1]++;
		str++;
	}
	if (!(*str >= '0' && *str <= '9'))
		return (0);
	while (*str >= '0' && *str <= '9')
	{
		varInt[0] = (varInt[0] * 10) + (*str - '0');
		str++;
	}
	if (varInt[1] % 2 != 0)
		varInt[0] = -varInt[0];
	return (varInt[0]);
}
