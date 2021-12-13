/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-cloe <mde-cloe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:00:40 by mde-cloe          #+#    #+#             */
/*   Updated: 2021/12/13 18:04:45 by mde-cloe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checklen(long n)
{
	int		len;

	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	len;
	long	n2;

	if (n == 0)
		return (ft_strdup("0"));
	n2 = (long)n;
	len = checklen(n2);
	s = ft_calloc(len + 1, sizeof(char));
	if (!s)
		return (NULL);
	if (n2 < 0)
	{
		s[0] = '-';
		n2 *= -1;
	}
	while (n2 > 0)
	{
		len--;
		s[len] = (n2 % 10) + '0';
		n2 /= 10;
	}
	return (s);
}
