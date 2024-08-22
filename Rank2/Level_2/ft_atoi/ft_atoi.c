int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int res;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
			i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '+')
			i++;
		else
		{
			sign = -1;
			i++;
		}
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res * sign);
}
/*
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("My func: %i\n", ft_atoi(argv[1]));
		printf("Lib func: %i\n", atoi(argv[1]));
	}
	else
		write (1, "\n", 1);
	return (0);
}
*/
