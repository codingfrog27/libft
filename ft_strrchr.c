#include "libft.h"

char	*strrchr(const char	*s, int	c)
{
	int		i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (i == c)
			return (s[i]);
		i--;
	}
	return (0);
}
