#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_sum(char *num1, char *num2)
{
	int	res;

	res = (atoi(num1) + atoi(num2));
	return (res);
}

int	ft_res(char *num1, char *num2)
{
	int	res;

	res = (atoi(num1) - atoi(num2));
	return (res);
}

int	ft_mult(char *num1, char *num2)
{
	int	res;

	res = (atoi(num1) * atoi(num2));
	return (res);
}

int	ft_div(char *num1, char *num2)
{
	int	res;

	res = (atoi(num1) / atoi(num2));
	return (res);
}

int	ft_resd(char *num1, char *num2)
{
	int	res;

	res = (atoi(num1) % atoi(num2));
	return (res);
}


int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int	res;

		if (argv[2][0] == '+')
			res = ft_sum(argv[1], argv[3]);
		else if (argv[2][0] == '-')
			res = ft_res(argv[1], argv[3]);
		else if (argv[2][0] == '*')
			res = ft_mult(argv[1], argv[3]);
		else if (argv[2][0] == '/')
			res = ft_div(argv[1], argv[3]);
		else if (argv[2][0] == '%')
			res = ft_resd(argv[1], argv[3]);
		printf("%i\n", res);
		return (0);
	}
	write (1, "\n", 1);
	return (0);
}
