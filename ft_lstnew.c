#include "libft.h"

/* returns new either way since if it cant malloc new == NULL */

t_list	*ft_lstnew(void	*content)
{
	t_list	*new;

	new = ft_calloc(1, sizeof(t_list));
	if (new)
		new->content = content;
	return (new);
}
