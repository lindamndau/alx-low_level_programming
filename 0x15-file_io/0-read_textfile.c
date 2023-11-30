#include "main.h"
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * @ Discription - reads a text file and prints it to the POSIX standard output.
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int length, wrotechars;
	char *buf;

	if (filename == NULL || letters == 0)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	length = read(fd, buf, letters);
	if (length == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	wrotechars = write(STDOUT_FILENO, buf, length);

	free(buf);
	close(fd);
	if (wrotechars != length)
	{
		return (0);
	}
	return (length);
}
