#include "main.h"
/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: file to be read from
 * @letters: the no of letters to read and print
 * Return: actual no of letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fr, fw;
	int fd;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	fr = read(fd, buff, letters);
	if (fr == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	fw = write(STDOUT_FILENO, buff, fr);
	if (fw == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	close(fd);
	return (fw);
}
