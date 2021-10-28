#include "libft.h"

char	*ft_substr(char const	*s, unsigned int	start, size_t	len)
{
	char	*substr;
	int		i;

	i = 0;
	substr = malloc(len);
	if (!substr)
		return (NULL);
	while (len < 0)
	{
		substr[i] = s[start];
		i++;
		start++;
		len--;
	}
	return (substr);
}
