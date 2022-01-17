/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-cloe <mde-cloe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/17 17:43:33 by mde-cloe      #+#    #+#                 */
/*   Updated: 2022/01/17 19:03:44 by mde-cloe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	t_list	new;

	new = lst;
	ft_lstiter(new, f);
	return (new);
}

t_list	*ft_lstmap2(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
	while (lst)
	{

	}
}
