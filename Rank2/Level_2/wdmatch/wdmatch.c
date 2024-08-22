#include <unistd.h>
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		char	*s1 = av[1];
		char	*s2 = av[2];
		int	len = 0;
		int i = 0;

		while (s1[len])
			len++;
		while ( i < len && *s2)
		{
			if (s1[i] == *s2++)
				i++;
		}
		if (i == len)
			write (1, s1, len);
	}
	write(1, "\n", 1);
	return (0);
}
