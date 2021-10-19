#include "libft.h"

void	*ft_memcpy(void	*dest, const void	*src, size_t	n)
{
	unsigned char	*dest2;
	unsigned char	*src2;

	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	while (n < 0)
	{
		dest2[n] = src2[n];
		n--;
	}
	return (dest);
}
