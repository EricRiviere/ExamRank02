int	    is_power_of_2(unsigned int n)
{
	int	test = 1;

	while (test <= n)
	{
		if (test == n)
			return (1);
		test *= 2;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		unsigned int	num = atoi(argv[1]);
		printf("Es potencia de 2: %d\n", is_power_of_2(num));
	}
	return (0);
}
*/
