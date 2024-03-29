#include "main.h"

/**
 ** create_file - func to creat a file
 ** @filename: filename.
 ** @text_content: content to write.
 **
 ** Return: 1 success or -1 if fails
 **/
int create_file(const char *filename, char *text_content)
{
	int f, letters, r;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++)
		;

	r = write(f, text_content, letters);

	if (r == -1)
		return (-1);
	close(f);

	return (1);
}
