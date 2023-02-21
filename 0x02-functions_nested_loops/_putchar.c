#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: teh character to print
 *
 * Retern: On seccess 1.
 * On error , -1 is returnednd, errno is set approprlately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
