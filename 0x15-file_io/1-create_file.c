#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: null terminated string
 * Return: 1 on SUCCESS or -1 on FAILURE
 */
int create_file(const char *filename, char *text_content)
{
	mode_t pp;
	int fd, write_result = 0, write_count = 0;

	pp = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	/* open existing or create new or trunc existing file */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, pp);
	if (fd == -1)
		return (-1);

	/* check if text_content is not NULL */
	if (text_content)
	{
		/* get count of characters in the text_content */
		while (text_content[write_count])
			write_count++;

		/* writes to the file and returns no of bytes */
		write_result = write(fd, text_content, write_count);
		if (write_result == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
