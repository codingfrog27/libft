#include "libft.h"

void	*memchr(const void	*s, int	c, size_t	n)
{
	size_t			i;
	unsigned char	str;

	i = 0;
	c = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
