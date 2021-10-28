#include "libft.h"

char	*strdup(const char	*s1)
{
	char	*copy;
	size_t	len;

	len = ft_strlen(s1) + 1;
	copy = malloc(len);
	if (!copy)
		return (NULL);
	copy = ft_memcpy(copy, s1, len);
	return (copy);
}
