unsigned int    lcm(unsigned int a, unsigned int b)
{
	int	res;
	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		res = a;
	else
		res = b;
	while (1)
	{
		if ((res % a) == 0 && (res % b) == 0)
			return (res);
		res++;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	int	n1 = atoi(argv[1]);
	int	n2 = atoi(argv[2]);
	printf("Res: %d\n", lcm(n1, n2));
	return (0);
}
*/
