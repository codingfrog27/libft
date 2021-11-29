#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

#include "libft.h"

int	main(void)
{
	printf("TESTING ITOA \n\n\n");
	long n = -2147483649;
	char *s = ft_itoa(n);
	printf("my itao is %s\n", s);
	printf("og itoa is %ld\n", n);
	int n = 5507;
	printf("TESTING PUTNBR\n\n\n")
	ft_putnbr_fd(n, 1);
	printf("should be the same as %i", n);
	return (0);
}
