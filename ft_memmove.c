#include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t	len)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if ((size_t)dst - (size_t)src < len)
	{
		i = (len - 1);
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
