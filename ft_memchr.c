#include "libft.h"

void	*memchr(const void	*s, int	c, size_t	n)
{
	size_t			i;
	unsigned char	c;

	i = 0;
	c = (unsigned char *)s;
	while (i < n)
	{
		if (c[i] == n)
			return ((void *)&c[i]);
		i++;
	}
	return (NULL);
}
