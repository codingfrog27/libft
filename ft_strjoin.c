#include "libft.h"

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	char	*s3;
	size_t	len;

	s3 = malloc(strlen(s1) + strlen(s2) + 1);
	len = strlen(s1) + strlen(s2) + 1;
	if (!s3)
		return (NULL);
	ft_strlcpy(s3, s1, len);
	ft_strlcat(s3, s2, len);
	return (s3);
}
