#include "main.h"

/**
 * _puts - check the code
 *
 * @str: pointer to the variable
 */i
void _puts(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\n');
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);
		i++;
	}
}
