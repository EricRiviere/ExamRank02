void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int	main(void)
{
	int	a = 4;
	int	b = 2;
	printf("Valor original de a: %i\n", a);
	printf("Valor original de b: %i\n", b);
	ft_swap(&a, &b);
	printf("Valor modificado de a: %i\n", a);
	printf("Valor modificado de b: %i\n", b);
	return (0);
}
*/
