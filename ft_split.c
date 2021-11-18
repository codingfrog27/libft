#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	wordcount;

	i = 0;
	wordcount = 0;
	//handle c = '\0' edgecase
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			wordcount++;
		i++;
	}
	return (wordcount);
}

static size_t	wordlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != c && s[len] != '\0')
	{
		len++;
	}
	return (len);
}

static void	freetime(char **s, size_t current)
{
	size_t	i;

	i = 0;
	while (i < current)
	{
		free(s[i]);
		i++;
	}
	free(s);
}

char	**splittime(char const **s, char c)
{
	
}
char	**ft_split(char const *s, char c)
{
	char	**out;
	size_t	wordcount;
	size_t	current;
	size_t	i;
	size_t	wlen;
//fix weird segfault
	i = 0;
	if (s == NULL || s[i] == '\0')
		return (NULL);
	else if (c == '\0')
		return ((void *)0);
	wordcount = count_words(s, c);
	out = malloc((wordcount + 1) * sizeof(char *));
	if (out == NULL)
		return (NULL);
	while (s[i] == c && s[i] != '\0')
		i++;
	current = 0;
	while (current < wordcount)
	{
		wlen = wordlen(s + i, c);
		out[current] = ft_substr(s, i, wlen);
		if (out[current] == NULL)
		{
			freetime(s, current);
			return (NULL);
		}
		i += wlen;
		while (s[i] == c && s[i] != '\0')
			i++;
		current++;
	}
	out[current] = NULL;
	return (out);
}
