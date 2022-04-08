/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcastro- <gcastro-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:43:06 by gcastro-          #+#    #+#             */
/*   Updated: 2022/04/08 20:00:51 by gcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ls;
	t_list	*new;

	ls = NULL;
	while (lst)
	{
		new = ft_lstnew ((*f)(lst -> content));
		if (new == NULL)
		{
			ft_lstclear (&ls, del);
			return (NULL);
		}
		ft_lstadd_back (&ls, new);
		lst = lst -> next;
	}
	return (ls);
}
