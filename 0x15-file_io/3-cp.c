#include "main.h"
#include <stdio.h>
/**
 * error_case - checking both files
 * @file_from: to copy from
 * @file_to: destination for copying
 * @argv: arguments
 * Return: nothing
 */
void error_case(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - main code
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err;
	ssize_t letters, wr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_case(file_from, file_to, argv);
	letters = 1024;
	while (letters == 1024)
	{
		letters = read(file_from, buff, 1024);
		if (letters == -1)
			error_case(-1, 0, argv);
		wr = write(file_to, buff, letters);
		if (wr == -1)
			error_case(0, -1, argv);
	}
	err = close(file_from);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err = close(file_to);
	if (err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
