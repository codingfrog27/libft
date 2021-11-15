#include "libft.h"
#include <libc.h>
#include <stdlib.h>

char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	char	*substr;
	int		i;
	size_t	slen;

	slen = ft_strlen(s);
	if ((size_t)start >= slen)
		return (strdup(""));
	i = 0;
	substr = (char *)malloc(sizeof(*s) * (len + 1));
	if (!substr)
		return (NULL);
	while (len > 0 && s[start])
	{
		substr[i] = s[start];
		i++;
		start++;
		len--;
	}
	substr[i] = '\0';
	return (substr);
}
