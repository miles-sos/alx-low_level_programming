#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: main file to open for append operation
 * @text_content: text to be appended
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_w;

	if (filename == NULL)
		return (-1);

	/* get length of text_content */
	if (text_content == NULL)
	{
		;
	}

	/* open the file, append the content */
	fd = open(filename, O_WRONLY | O_APPEND);

	/* append to the file */
	bytes_w = write(fd, text_content, strlen(text_content));

	if (fd == -1 || bytes_w == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
