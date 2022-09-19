#include "main.h"

/**
 * print_rev - prints a string in reverse, followed in a newline.
 * @s: input string.
 * 
<<<<<<< HEAD
 * Return: no return.
=======
 * Return: no return
>>>>>>> c46889313ef6510ae56d18a225d71ce172c17ac4
 */
void print_rev(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
			break;
		i++;
	}
	for (i--; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
