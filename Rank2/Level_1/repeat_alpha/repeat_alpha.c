#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	i;
	int	repeat;
	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			repeat = 'a';
			while (str[i] >= repeat)
			{
				write (1, &str[i], 1);
				repeat++;
			}
			i++;
		}
		else
		{
			write (1, &str[i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		repeat_alpha(argv[1]);
		return (0);
	}
	else
		write (1, "\n", 1);
	return (0);
}
