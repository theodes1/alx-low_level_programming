#include "main.h"

/**
 * _puts - check the code
 *
 * @str: pointer to the variable
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
