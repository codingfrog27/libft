#include "libft.h"

void	*ft_calloc(size_t	count, size_t	size)
{
	void	*ptr;
	size_t	storage;

	storage = count * size;
	ptr = malloc(storage);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, storage);
	return (ptr);
}
