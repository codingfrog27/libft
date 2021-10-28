include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t	len)
{
	unsigned char	*dst2;
	unsigned char	*src2;

	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	while (len < 0)
	{
		dst2[len] = src2[len];
		len--;
	}
	return (dst);
}
