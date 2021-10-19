#include "libft.h"
void	*ft_memset(void *dest, int	c, size_t	len)
{
	unsigned int	counter;
	unsigned char	c2;
	unsigned char	*dest2;

	c2 = (unsigned char)c;
	counter = 0;
	dest2 = (unsigned char *)dest;
	while (counter <= len)
	{
		dest2[counter] = c2;
		counter++;
	}
	return (dest);
}
