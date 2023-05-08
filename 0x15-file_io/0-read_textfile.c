#include "main.h"

/**
 * read_textfile -  reads a text file and prints it
 * @filename: pointer to filename
 * @letteres: letters is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * Or 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	ssize_t size = 0;
	char ch;

	if (filename == NULL)
		return (0);
	
	if ((fptr = fopen(filename, "r")) == NULL)
		return (0);
	
	while ((letters--) && (ch = getc(fptr)) != EOF)
	{
		size++;
		_putchar(ch);
	}

	fclose(fptr);
	return (size);
}

#include <unistd.h>

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
