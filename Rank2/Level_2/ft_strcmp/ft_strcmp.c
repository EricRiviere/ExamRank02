int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]))
			i++;
	return((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("My func: %i\n", ft_strcmp(argv[1], argv[2]));
		printf("Lib func: %i\n", strcmp(argv[1], argv[2]));
		return (0);
	}
	write (1, "\n", 1);
	return (0);
}
*/
