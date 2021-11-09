#include "libft.h"

char	*ft_strchr(const char	*s, int	c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		s++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (0);
}
