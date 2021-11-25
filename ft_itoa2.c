#include "libft.h"

char	*ft_itoa(int n)
{
	long	n2;
	char	*s;
	size_t	len;	

	n2 = (long)n;
	len = checklen(n2);
	if (n == "0")
		return (ft_strdup("0"));
	s = calloc(sizeof(char), len);
	if (!s)
		return (NULL);
	
}

// 1 check len of n
// 2 convert to into 