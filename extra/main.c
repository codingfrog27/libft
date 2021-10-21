//toupper test
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int	test;
	int	test2;

	test = 'a';
	test2 = ft_toupper(test);
	write(1, &test2, 1);
	
	const char str[] = "   \n +98894234";
	int test = ft_atoi(str);
	printf("\n%d\n", test);
	return (0);