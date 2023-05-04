#include "main.h"

/**
 * get_bit - points to the value of a given index bit
 * @n: the number to look for
 * @index: the bit index
 *
 * Return: the value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
