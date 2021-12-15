/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap_bonus.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-cloe <mde-cloe@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/15 13:59:12 by mde-cloe      #+#    #+#                 */
/*   Updated: 2021/12/15 16:12:04 by mde-cloe      ########   odam.nl         */
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
		ret = ft_lstadd_back()

	}
}

lstnew

lstclear

lstadd last