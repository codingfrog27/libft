#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while(lst->content != '\0')
	{
		lst = lst->next;
	}
	return (lst);
}