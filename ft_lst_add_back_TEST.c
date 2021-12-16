/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lst_add_back_TEST.c                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: mde-cloe <mde-cloe@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/16 17:06:59 by mde-cloe      #+#    #+#                 */
/*   Updated: 2021/12/16 17:49:30 by mde-cloe      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	printlist(t_list *head)
{
	while (head)
	{
		printf("%s\n",head->content);
		head = head->next;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	t_list	*head;
	t_list	*newnode;

	i = 1;
	head = NULL;
	if (argc < 2)
	{
		return (0);
	}
	while (argv[i])
	{
		newnode = ft_lstnew(ft_strdup(argv[i]));
		ft_lstadd_back(&head, newnode);
		i++;
	}
	printlist(head);
	printf("%s\n", ft_lstlast(head)->content);
	ft_lstclear(&head, free);
}

	// t_list	*l = NULL;
	// t_list	*head = ft_lstnew(argv)

	// printf("%p", ft_lstlast(l));
