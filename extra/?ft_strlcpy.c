#include "libft.h"

unsigned int	ft_strlcpy(char *dst, const char	*src, size_t	dstsize)
{
	size_t	c;

	c = 0;
	while(src[c] && c < (dstsize - 1))
	{
		dst[c] = src[c];
		c++;
	}
	return (c);
}
src[j] && i + 1 < size)