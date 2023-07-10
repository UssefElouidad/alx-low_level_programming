#include "main.h"
/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: the pointer to the file name.
 * @letters: the number of letters it should read and print.
 * Return: the actual number of letters or 0.
 */
#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buffer[READ_BUF_SIZE * 8];
	ssize_t bytes;

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytes = read(fd, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(fd);

	return (bytes);
}
