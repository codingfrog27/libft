#include "libft.h"

void	ft_bzero(void	*s, size_t	n)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (i > n)
	{
		((unsigned char *)s)[n] = 0;
		i++;
	}
}
