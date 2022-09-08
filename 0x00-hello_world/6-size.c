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

	printf("Size of a char: %lu byte\n", sizeof(c));
	printf("Size of an int: %lu byte\n", sizeof(c));
	printf("Size of a long: %lu bytes\n", sizeof(l));
	printf("Size of a long long: %lu bytes\n", sizeof(ll));
	printf("Size of a float: %lu bytes\n", sizeof(f));
	return (0);
}
