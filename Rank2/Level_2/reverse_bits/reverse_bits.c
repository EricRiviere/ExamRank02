unsigned char	reverse_bits(unsigned char octet)
{
	unsigned int	i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		i--;
		res = (res << 1) | (octet & 1);
		octet = octet >> 1;
	}
	return (res);
}

#include <stdio.h>
int	main(void)
{
	unsigned char bit = 0;
	unsigned char res = reverse_bits((unsigned char)1);

	int	i = 8;
	while (i > 0)
	{
		i--;
		bit = (res >> i & 1) + 48;
		printf("%c", bit);
	}
}
