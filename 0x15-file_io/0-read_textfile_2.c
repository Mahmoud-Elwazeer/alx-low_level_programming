#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile -  reads a text file and prints it
 * @filename: pointer to filename
 * @letteres: letters is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * Or 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t size = 0;
	char ch;
	int fd;

	if (filename == NULL)
		return (0);
	
	if ((fd = open(filename, O_RDONLY)) == -1)
		return (0);
	
	while ((letters--) && (ch = _getchar(fd)) != EOF)
	{
		size++;
		_putchar(ch);
	}

	return (size);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _getchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _getchar(char c)
{
	return (read(0, &c, 1));
}
