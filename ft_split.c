#include "libft.h"
#include "printf.h"

static int	wordlen(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

static int	wordcount(char *s, char c)
{
	int		words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
			words++;
		while (s[i] && s[i] != c)
			i++;
		i++;
	}
	return (words);
}

/*

		// Skip delimiter
		while (i < wordcount)
		{
			out[i] = ft_substring(s, &s[j], wordlen(s, c));
			if (!out[i])
				return (0);			
		}

*/
/* More variables... on line 53*/
		/* Free ur array line 54*/

// void	something(char *s,	char c)
// {
// 	char	*newstring;
// 	int		wordsize;
// 	int		j;

// 	j = 0;
// 	wordsize = wordlen(s, c);
// 	newstring = malloc(sizeof(char) * coollen(s, c));
// 	while (j <= wordsize)
// 	{
// 		newstring[j] == s[j];
// 		j++;
// 	}
//}
double array **

len = wordlen()
array[i] = memcpy()


char	**ft_split(char const	*s, char	c)
{
	char	**out;
	size_t	words;

	words = wordcount(s, c);
	out = malloc((words + 1) * sizeof(char *));
	if (!out)
		return (NULL);
	if (ft_allocate(out))
	{	
	}
	return (out);
}