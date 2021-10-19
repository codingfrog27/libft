#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	i;
	size_t	c;
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	c = dstlen;
	i = 0;
	if (dstlen < dstsize - 1 && dstsize != 0)
	{
		while (src[i] && dstlen + i < dstsize - 1)
		{
			dst[c] = src[i];
			c++;
			i++;
		}
		dst[c] = '\0';
	}
	return (dstlen + ft_strlen(src));
}
