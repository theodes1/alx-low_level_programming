#include "main.h"
/**
 * print_last_digit - last digit.
 * @c: variable.
 * Putchar - writes a character to stdout.
 * Return: 0 if upper, 1 if lower.
 */
int print_last_digit(int n)
{
	int d = _abs(n % 10);

	_putchar(d + '0');
	return (d);
}

/**
 * _abs - returns the absolute value of integer
 * @n: the integer to value absolutely
 *
 * Return: a positive integer or zero
 */
int _abs(int n)
{
	return (n > 0 ? n : -n);
}	
