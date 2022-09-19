#include "main.h"

/**
 * _strlen - check the code
 * @s: pointer to a
 *
 * Return: length if Success
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
