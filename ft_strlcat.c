#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	i;
	size_t	j;
	size_t destlen;
	size_t srclen;

	destlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = destlen;
	j = 0;
	if (destlen >= dstsize)
		return (dstsize + srclen);
	while (src[j] && i + 1 < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (destlen + srclen);
}
	