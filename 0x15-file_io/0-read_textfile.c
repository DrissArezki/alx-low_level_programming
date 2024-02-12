#include "main.h"

/**
 ** read_textfile - 9ra w zid 9ra
 ** @filename: chno smytek a ssi ?
 ** @letters: 9amar ana wahid
 ** Return: 0 wella 1, 3la 7ssab lgana
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char *buff;
	ssize_t bytes;
	ssize_t i;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY, 0777);

	if (f == -1)
		return (0);

	buff = malloc(letters * sizeof(char));

	if (!buff)
		return (0);

	bytes = read(f, buff, letters);

	if (bytes == -1)
	{
		free(buff);
		return (0);
	}

	for (i = 0; i < bytes; i++)
	{
		write(STDOUT_FILENO, &buff[i], 1);
	}

	if (close(f) == -1)
		return (0);

	free(buff);

	return (bytes);
}
