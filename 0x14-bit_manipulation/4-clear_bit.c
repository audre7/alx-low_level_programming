#include "main.h"

/**
 * clear_bit - sets value of bit
 * @n: points to number that needs to be change
 * @index: bit index to clear
 *
 * Return: 1 for sucess and -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
