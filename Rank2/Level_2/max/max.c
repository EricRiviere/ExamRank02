int		max(int* tab, unsigned int len)
{
	if (len == 0)
		return (0);
	int	max = tab[0];
	len--;
	while (len > 0)
	{
		if (tab[len] > max)
		{
			max = tab[len];
			len--;
		}
		else
			len--;
	}
	return (max);
}
/*
#include <stdio.h>
int	main(void)
{
	int	tab[10]={2, 6, 230, 50, 76, 100, 32, 97, 8, 20};
//	int tab[10]={};
	unsigned int len = 10;
//	unsigned int len = 0;
	printf("max: %d\n", max(tab, len));
	return (0);
}
*/
