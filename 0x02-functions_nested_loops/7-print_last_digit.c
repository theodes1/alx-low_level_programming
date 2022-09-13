#include "main.h"
/**
 * print_last_digit - last digit.
 * @c: variable.
 * Putchar - writes a character to stdout.
 * Return: 0 if upper, 1 if lower.
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-1 + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
