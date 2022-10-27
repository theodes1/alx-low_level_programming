#include "main.h"

/**
 * Function check_for_endianness
 * returns 1, if architecture is little endian
 * return 0, if architecture is big endian
 */
int get_endianness(void)
{
	int x;
	char *c;

	x = 1;
	c = (char*) &x;
	return ((int)c[0]);
}
