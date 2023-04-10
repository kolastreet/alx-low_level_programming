#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: 0 if endian bigger, 1 if endian little
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
