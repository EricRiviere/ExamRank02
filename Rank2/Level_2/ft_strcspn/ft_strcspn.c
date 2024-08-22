#include <aio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i = 0;
	int	j;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
#include <unistd.h>
#include <stdio.h>
#include <string.h>
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("Lib func: %lu\n", strcspn(argv[1], argv[2]));
		printf("My func: %zu\n", ft_strcspn(argv[1], argv[2]));
		return (0);
	}
	write (1, "\n", 1);
	return (0);
}
