int	ft_strlen(char *str)
{
	int	i;
	i = 0;

	while (str[i])
		i++;
	return(i);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*str="Hola mundo";
	printf("My func: %d\n", ft_strlen(str));
	printf("Lib func: %lu\n", strlen(str));
	return (0);
}
*/
