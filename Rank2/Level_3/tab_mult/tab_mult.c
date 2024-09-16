#include <unistd.h>

void	putnbr (int n)
{
	if (n >= 10)
		putnbr(n / 10);
	write (1, &"0123456789"[n % 10], 1);
}

int	ft_atoi(char *nb)
{
	int	res = 0;
	int	i = 0;
	while (nb[i] >= '0' && nb[i] <= '9')
	{
		res = res * 10 + nb[i] - '0';
		i++;
	}
	return (res);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int	n = ft_atoi(argv[1]);
		int	i = 1;

		while (i <= 9)
		{
			putnbr(i);
			write (1, " x ", 3);
			putnbr (n);
			write (1, " = ", 3);
			putnbr ( n * i);
			write (1, "\n", 1);
			i++;
		}
	}
	else
		write (1, "\n", 1);
	return (0);
}

/* Test putnbr (positive num only)
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	int	nb = atoi(argv[1]);
	putnbr(nb);
}
*/
/* Test ft_atoi + putnbr (no neg num);
int	main(int argc, char *argv[])
{
	int	nb = ft_atoi(argv[1]);
	putnbr(nb);
}
*/
