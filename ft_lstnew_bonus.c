/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcastro- <gcastro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:43:15 by gcastro-          #+#    #+#             */
/*   Updated: 2022/04/08 20:00:57 by gcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ls_new;

	ls_new = malloc (sizeof(t_list));
	if (ls_new == 0)
		return (0);
	(*ls_new).content = content;
	(*ls_new).next = NULL;
	return (ls_new);
}
