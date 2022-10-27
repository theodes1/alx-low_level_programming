#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 * Return: converted number or 0 if b is NULL or there are chars in the string.
 */
unsigned int binary_to_uint(const char *b)
{
	 unsigned int val = 0;
	 unsigned int aux = 1;
	 int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		i++;
	}
	for (i = (i - 1); i >= 0; i--)
	{
		if (b[i] != 48 && b[i] != 49)
		{
			return (0);
		}
		val = val + ((b[i] - 48) * aux);
		aux = aux * 2;
	}
	return (val);
}
