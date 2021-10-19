//toupper test
#include <unistd.h>

int	main(void)
{
	int	test;
	int	test2;

	test = 'a';
	test2 = ft_toupper(test);
	write(1, &test2, 1);
	return (0);
}
