#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of char: %lu byte\n", sizeof(c));
	printf("Size of int: %lu byte\n", sizeof(c));
	printf("Size of long: %lu bytes\n", sizeof(l));
	printf("Size of long long: %lu bytes\n", sizeof(ll));
	printf("Size of float: %lu bytes\n", sizeof(f));
	return (0);
}
