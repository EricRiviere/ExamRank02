unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4 | octet << 4));
}

#include <stdio.h>
int	main(void)
{
	unsigned char bit = 0;
	unsigned char res = swap_bits((unsigned char)1);

	int	i = 8;
	while (i > 0)
	{
		i--;
		bit = (res >> i & 1) + 48;
		printf("%c", bit);
	}
}

