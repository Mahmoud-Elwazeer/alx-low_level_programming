#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - create file
 * @filename: name of file
 * @text_content: content of file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int size = 0;

	for (size = 0; *(text_content + size) != '\0'; size++)
		;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}

	if (write(fd, text_content, size) == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);
}
