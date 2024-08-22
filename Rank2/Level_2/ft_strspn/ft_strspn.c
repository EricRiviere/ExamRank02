#include <stddef.h>
size_t	ft_strspn(const char *s, const char *accept)
{
	int	i = 0;
	int	j;
	int check;

	while(s[i])
	{
		j = 0;
		check = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				check = 1;
			j++;
		}
		if (check == 0)
			return (i);
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("My func: %zu\n", ft_strspn(argv[1], argv[2]));
		printf("Lib func: %lu\n", strspn(argv[1], argv[2]));
		return (0);
	}
	write(1, "\n", 1);
	return (0);
}
*/
