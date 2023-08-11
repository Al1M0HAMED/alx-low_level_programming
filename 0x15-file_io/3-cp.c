#include "main.h"
/**
 * main -  this program that copies the content of a file to another file.
 * @ac: is the number of cl arguments..
 * @av: is the cl arguments.
 * Return: 97 if the number of arguments is not correct && 98 if file_from
 * dosent exist && 99 if can't create or if write to file_to &&
 * 100 if can't close a file descriptor.
 */
int main(int ac, char *av[])
{
	int fd_from, fd_to, bytes_from, m, n;
	char buff[BUFSIZ];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((bytes_from = read(fd_from, buff, BUFSIZ)) > 0)
	{
		if (fd_to < 0 || write(fd_to, buff, bytes_from) != bytes_from)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(fd_from);
			exit(99);
		}
	}
	if (bytes_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	m = close(fd_r);
	n = close(fd_w);
	if (m < 0 || n < 0)
	{
		if (m < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_f);
		if (n < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_t);
		exit(100);
	}
	return (0);
}
