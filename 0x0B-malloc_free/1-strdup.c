#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space with copy of arg
 * @str: string to copy
 * Return: pointer to array or null
 */
char *_strdup(char *str);
{
	char *str2;
	int n = 0;
	int x;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[n] != '\0')
	{
		n++;
	}
	n++;
	str2 = malloc(n * sizeof(char));
	if (str2 == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < n; x++)
	{
		str2[x] = str[x];
	}
	return (str2);
}
