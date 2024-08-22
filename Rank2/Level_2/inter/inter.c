#include <unistd.h>
int	main(int argc, char *argv[])
{
	int	i = 0;
	int	j;
	int	look[256] = {};

	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
			{
				if (argv[1][i] == argv[2][j] && !look[(int)argv[2][j]])
				{
					look[(int)argv[2][j]] = 1;
					write(1, &argv[2][j], 1);
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
