
#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	if(*lst == NULL)
		*lst = new;
	else
	{
		t_list	*ls;
		ls = ft_lstlast(*lst);
		ls -> next = new;
	}	
}
