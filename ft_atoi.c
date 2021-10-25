#include "libft.h"

int	ft_atoi(const char	*str)
{
	int		i;
	long	result;

	i = 0;
	result = 0;
	while (search_string("\t\n\v\f\r ", str[i]))
		i++;
	if (str[i] == '-')
	{
		result *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return ((int)result);
}
