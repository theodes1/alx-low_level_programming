#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function that execute another function.
 * @array: pointer to the start of the array.
 * @size: array size.
 * @action: action to execute in the content of the array.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int z = 0;

	if (array == NULL)
		return;
	if (action == NULL)
		return;
	while (z < size)
	{
		action(array[z]);
		z++;
	}
}
