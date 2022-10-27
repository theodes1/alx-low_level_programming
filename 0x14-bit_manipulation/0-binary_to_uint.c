#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 * Return: converted number or 0 if b is NULL or there are chars in the string.
 */
unsigned int binary_to_uint(const char *b)
{
	 unsigned int val = 0;
	 int i = 0;

	if (b == NULL)
	{
		return 0;
	}

	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i]-'0';
		i++;
	}
	return (val);
}
