/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-cloe <mde-cloe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:43:31 by mde-cloe          #+#    #+#             */
/*   Updated: 2021/12/13 17:43:32 by mde-cloe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
