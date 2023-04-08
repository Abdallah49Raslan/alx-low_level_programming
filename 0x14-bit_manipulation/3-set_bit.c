#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @n: poiner to the number to change
 * @index: index of bit to set 1
 * Return: 1 for success, -1 for fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
