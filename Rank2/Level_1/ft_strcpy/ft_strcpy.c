char	*ft_strcpy(char *s1, char *s2)
{
	unsigned int	i;
	i = 0;

	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = 0;
	return (s1);
}

//Comportamiento indefinido si dest < src
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str1="Hola";
	char	*str3="Hola";
	char	str2[3]="Mun";
	char	str4[3]="Mun";

	printf("My func: %s\n", ft_strcpy(str2, str1));
	printf("Lib func: %s\n", strcpy(str4, str3));

	return (0);
}
*/
