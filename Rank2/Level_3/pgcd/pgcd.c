/*
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int	n1 = atoi(argv[1]);
		int	n2 = atoi(argv[2]);
		int	div;
		int	res;

		div = 1;
		if (n1 <= 0 || n2 <= 0)
			return (0);
		while ((div <= n1 || div <= n2))
		{
			if ((n1 % div) == 0 && (n2 % div) == 0)
				res = div;
			div++;
		}
		printf("%d\n", res);
	}
	else
		printf("\n");
	return (0);
}
*/

#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int	n1 = atoi(argv[1]);
		int n2 = atoi(argv[2]);
		int	res1 = n2;
		int	res2 = n1 % n2;
		int	temp;

		while (res2 != 0)
		{
			temp = res2;
			res2 = res1 % res2;
			res1 = temp;
		}
		printf("%d", res1);			
//		printf("mcd = %d, mcm = %d\n", res1, (n1*n2)/res1);
	}
	else
		printf("\n");
	return (0);
}
