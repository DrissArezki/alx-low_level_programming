#include "function_pointers.h"
/**
 * int_index - returns the index of the 1st elmt for
 * which the cmp function does not return 0
 * @array: an array
 * @size: size of the array
 * @cmp: pointer to the function in question
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
