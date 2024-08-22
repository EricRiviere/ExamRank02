#include <unistd.h>

void	ft_putstr(char *str)
{
	unsigned int	i;
	i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ft_putstr(argv[1]);
	}
	else
		write (1, "Introduce just one string\n", 25);
	return(0);
}
*/
