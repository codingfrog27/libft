#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	i = 0;
	while (ft_strchr(set, s1[start]))
		start++;
	while (ft_strchr(set, s1[end - 1]))
		end--;
	s2 = ft_calloc(1, len - start);
	while (s2[i])
	{
		s2[i] = s1[start]
			i++;
		start++;
	}
	return (s2);
}
