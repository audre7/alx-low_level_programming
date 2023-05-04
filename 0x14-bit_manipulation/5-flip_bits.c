#include "main.h"

/**
 * bit_flipper - counts the number of bit to change and get another
 * @n: first number
 * @m: sec number
 *
 * Return: bit number to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
