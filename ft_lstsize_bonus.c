
#include "libft.h"
#include <stdio.h>

int ft_lstsize(struct s_list *lst)
{
	int i;

	i = 0;
	while(lst)
	{
		i++;
		lst = lst -> next;
	}
	return (i);
}
