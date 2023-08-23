#include "main.h"

/**
 * check_IO_st - checks if a file can be opened or closed
 * @st: file descriptor of the file to be opened
 * @filename: name of the file
 * @m: closing or opening
 * @fd: file descriptor
 *
 * Return: void
 */
void check_IO_st(int st, int fd, char *filename, char m)
{
	if (m == 'C' && st == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (m == 'O' && st == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (m == 'W' && st == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: arguments passed
 *
 * Return: 1 on success, exit otherwise
 */
int main(int argc, char *argv[])
{
	int src, dest, n_read = 1024, wr, cl_src, cl_dst;
	unsigned int m = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_IO_st(src, -1, argv[1], 'O');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, m);
	check_IO_st(dest, -1, argv[2], 'W');
	while (n_read == 1024)
	{
		n_read = read(src, buffer, sizeof(buffer));
		if (n_read == -1)
			check_IO_st(-1, -1, argv[1], 'O');
		wr = write(dest, buffer, n_read);
		if (wr == -1)
			check_IO_st(-1, -1, argv[2], 'W');
	}
	cl_src = close(src);
	check_IO_st(cl_src, src, NULL, 'C');
	cl_dst = close(dest);
	check_IO_st(cl_dst, dest, NULL, 'C');
	return (0);
}
