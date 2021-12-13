/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-cloe <mde-cloe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:00:40 by mde-cloe          #+#    #+#             */
/*   Updated: 2021/12/13 18:08:01 by mde-cloe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *dest, int c, size_t	len)
{
	unsigned int	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)dest)[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}
