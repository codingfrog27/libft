char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
		return (haystack);
	while (haystack[i] && len < 0)
	{
		while (haystack[i] == needle[j])
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return (&haystack[i - j]);
		}
		i++;
	}
	return (NULL);
}