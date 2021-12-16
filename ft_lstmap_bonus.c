/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-cloe <mde-cloe@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/15 13:59:12 by mde-cloe      #+#    #+#                 */
/*   Updated: 2021/12/16 17:51:20 by mde-cloe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*new;

	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		ft_lstadd_back(&ret, new);
		if (!ret)
			ft_lstclear(&ret, del);
		lst = lst->next;
	}
	return (ret);
}
