
#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *ls;

	while(*lst)
	{
		ls = (**lst).next;
		ft_lstdelone((*lst), del);
		*lst = ls;
	}
	*lst = NULL;
}
