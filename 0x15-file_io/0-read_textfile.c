#include "main.h"
/**
 *
 *
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t number_of_bytes_read, number_of_bytes_written;
	char *buff;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	buff = malloc(sizeof(char) * letters + 1);
	number_of_bytes_read = read(fd, buff, letters);
	if (number_of_bytes_read == -1 || buff == NULL || filename == NULL
			|| letters == 0 || fd < 0)
	{
		close(fd);
		free(buff);
		return (0);
	}
	number_of_bytes_written = write(1, buff, number_of_bytes_read);
	if (number_of_bytes_written != number_of_bytes_read)
	{
		close(fd);
		free(buff);
		return (0);
	}
	close(fd);
	free(buff);
	return (number_of_bytes_read);
}
