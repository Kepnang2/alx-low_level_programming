#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: the array
 * @size: the size
 * @action: is the pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (size == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
