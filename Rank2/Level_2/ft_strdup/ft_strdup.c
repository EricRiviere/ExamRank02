#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int	i = 0;
	while (src[i])
		i++;
	char	*dup = malloc(sizeof(char) * (i + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	src[i] = 0;
	return (src);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		char	*res = ft_strdup(argv[1]);
		printf("Dup: %s\n", res);
		printf("Ori: %s\n", argv[1]);
	}
	return (0);
}
*/
