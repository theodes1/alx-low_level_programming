#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of char: %lu byte\n", sizeof (c));
	printf("Size of int: %lu bytes\n", sizeof (i));
	printf("Size of long int: %lu bytes\n", sizeof (l));
	printf("Size of long long int: %lu bytes\n", sizeof (ll));
	printf("Size of float: %lu bytes\n", sizeof (f));
	return (0);
}
