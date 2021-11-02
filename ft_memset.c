#include "libft.h"
void	*ft_memset(void *dest, int	c, size_t	len)
{
	unsigned int	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)dest)[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}
