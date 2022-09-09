#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int y;
	int z;

	for (y = 0; y <= 9; y++)
	{
		for (z = y + 1; z <= 9; z++)
		{
		putchar(y + '0');
		putchar(z + '0');

		if (y < 8)
		{
		putchar(',');
		putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
