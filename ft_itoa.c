#include "libft.h"

static int	checklen(int n)
{
	int		len;

	len = 0;
	// if (n <= 0)
	// 	len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	len;

	len = checklen(n);
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
	{
		free(s);
		return (NULL);
	}
	if (n < 0)
	{
		s[0] = '-';
		len++;
		n *= -1;
	}
	s[len + 1] = '\0';
	while (s[len])
	{
		s[len] = n % 10 + '0';
		len--;
		n /= n / 10;
	}
	return (s);
}
