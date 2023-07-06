#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *w;

	x = 1;
	w = (char *) &x;

	return ((int)*w);
}
