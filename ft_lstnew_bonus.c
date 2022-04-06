
#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *ls_new;

	ls_new = malloc(sizeof(t_list));
	if (ls_new == 0)
		return(0);
	(*ls_new).content = content;
	(*ls_new).next = NULL;
	return (ls_new);
}
