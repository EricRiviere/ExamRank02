char	*ft_strrev(char *str)
{
	int	i = 0;
	int	j = 0;
	int	len;
	char	temp;
	while (str[i])
		i++;
	len = i;
	i--;
	while (j < (len / 2))
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		i--;
		j++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("Original: %s\n", argv[1]);
		printf("Reverso: %s\n", ft_strrev(argv[1]));
	}
	return (0);
}
*/
