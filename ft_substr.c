#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if ((size_t)start >= slen || !len)
		return (ft_strdup(""));
	if (len > slen)
		len = slen;
	substr = ft_calloc(len + 1, sizeof(char));
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	return (substr);
}
