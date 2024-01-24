#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - exe a function as param on each elmt
 * of an array
 * @array: array
 * @size: size of the array
 * @action: pointer to the function to use
 * Retunr: function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
