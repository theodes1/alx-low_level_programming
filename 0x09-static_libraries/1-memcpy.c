#include "main.h"

/**
 * *_memcpy - fills the first n bytes of the memory area pointed to by s.
 * @dest: destination of the bytes.
 * @src: source of the bytes to copy.
 * @n: bytes of memory to fill.
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = 0;

	while (n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	return (dest);
}
