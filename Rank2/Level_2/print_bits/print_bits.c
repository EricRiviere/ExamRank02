#include <unistd.h>
void	print_bits(unsigned char octet)
{
	int	i = 8;
	unsigned char bit = 0;

	while (i > 0)
	//while (i--)
	{
		i--;
		bit = (octet >> i & 1) + 48;
		write (1, &bit, 1);
	}
}

int	main(void)
{
	unsigned char octet = 8;
	print_bits(octet);
}
