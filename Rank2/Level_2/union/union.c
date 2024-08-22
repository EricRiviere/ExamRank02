#include <unistd.h>
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		char	*s1 = argv[1];
		char	*s2 = argv[2];
		int	i = 0;
		int	j = 0;
		int	look[256]={};

		while (s1[i])
		{
			if (!look[s1[i]])
			{
				look[(int)s1[i]] = 1;
				write (1, &s1[i], 1);
				i++;
			}
			else
				i++;
		}
		while (s2[j])
		{
			if (!look[s2[j]])
			{
				look[(int)s2[j]] = 1;
				write (1, &s2[j], 1);
				j++;
			}
			else
				j++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
