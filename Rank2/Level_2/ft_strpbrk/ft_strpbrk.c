#include <stddef.h>
char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i= 0;
	while (s1[i])
	{
		int j = 0;
		while (s2[j])
		{
			if (s1[i] != s2[j])
				j++;
			else if (s1[i] == s2[j])
				return ((char *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		char	*my_res = ft_strpbrk(argv[1], argv[2]);
		char	*lib_res = strpbrk(argv[1], argv[2]);
		printf("My res: %s\n", my_res);
		printf("Lb res: %s\n", lib_res);
	}
	return (0);
}
*/
