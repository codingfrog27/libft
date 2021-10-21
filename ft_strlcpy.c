#include <stddef.h>

size_t	strlcpy(char	*dst, const char	*src, size_t	maxlen)
{
	int	srclen;

	srclen = ft_strlen(src);
	if (srclen + 1 < maxlen)
	{
		while (srclen > 0)
		{
			dst[srclen] = src[srclen];
			srclen--;
		}
	}
	else if (maxlen != 0)
	{
		maxlen--;
		dst[maxlen] = '\0';
		maxlen--;
		while (maxlen > 0)
		{
			dst[maxlen] = src[maxlen];
			maxlen--;
		}
	}
	return (ft_strlen(src));
}
