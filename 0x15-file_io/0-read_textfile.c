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
	ssize_t size = 0, read_byte;
	char *ch;
	int fd;

	if (filename == NULL)
		return (0);
	
	if ((fd = open(filename, O_RDONLY)) == -1)
		return (0);
	
	ch = (char *)malloc(sizeof(char) * letters);
	if (ch == NULL)
		return (0);

	while ((read_byte = read(fd, ch, letters)) != 0 && size < (ssize_t)letters)
	{
		size += read_byte;
		if ((write(STDOUT_FILENO, ch, read_byte)) == -1)
			return (0);
	}
	
	close(fd);
	free(ch);
	return (size++);
}
