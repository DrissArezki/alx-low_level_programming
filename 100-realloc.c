#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the previous mem allocated
 * @old_size: size of ptr memory
 * @new_size: new alloc mem
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	char *source;
	char *dest;
	unsigned int i;

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	source = (char *)ptr;
	dest = (char *)p;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			dest[i] = source[i];
	}
	else
	{
		for (i = 0; i < old_size; i++)
			dest[i] = source[i];
	}

	free(ptr);
	return (p);
}
