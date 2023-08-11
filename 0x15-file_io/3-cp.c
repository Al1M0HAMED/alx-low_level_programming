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
	int fd_from, fd_to, bytes_from, close_from, close_to;
	char buff[BUFSIZ];
	char *file_from, *file_to;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = av[1], file_to = av[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((bytes_from = read(fd_from, buff, BUFSIZ)) > 0)
	{
		if (fd_to < 0 || write(fd_to, buff, bytes_from) != bytes_from)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd_from);
			exit(99);
		}
	}
	if (bytes_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	close_from = close(fd_from);
	close_to = close(fd_to);
	if (close_to < 0 || close_from < 0)
	{
		if (close_from < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		if (close_to < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
