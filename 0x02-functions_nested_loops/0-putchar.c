#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: teh character to print
 *
 * Retern:on (seccess) 1
 * on error < -1 is returnednd errno is set approprlately.
 */
int _putchar(char c)
{
	 return (write(1, &c, 1));
}
