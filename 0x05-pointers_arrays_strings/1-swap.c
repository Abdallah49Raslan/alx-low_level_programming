#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 * @a: the first integer to be swapped.
 * @b: teh second integer t obe swapped.
 * Return: notehing
 */

void swap_int(int *a, int *b)
/* the funcion that swaps the values of two integers. */
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
