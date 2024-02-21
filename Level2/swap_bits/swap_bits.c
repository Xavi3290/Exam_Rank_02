unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

#include <stdio.h>

int main(void)
{
	printf("%u", swap_bits(2));
	printf("%u", swap_bits(4));

	return (0);
}
