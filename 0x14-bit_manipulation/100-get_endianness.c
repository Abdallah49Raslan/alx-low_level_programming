#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 9 for big, 1 for littele
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
