#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * main - Entry point
 * @argc: number of argumen
 * @argv: content of argument
 * Return: 0 when success
 */
int main(int argc, char *argv[])
{
	int fd1, fd2;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_TRUNC);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	close(fd1);
	close(fd2);
	return (0);
}
