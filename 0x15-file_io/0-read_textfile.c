#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters read and printed, or 0 if an error occurred
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t nread;
int fd;
char *buf;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * (letters + 1));
if (buf == NULL)
return (0);
nread = read(fd, buf, letters);
if (nread == -1)
{
free(buf);
close(fd);
return (0);
}
buf[nread] = '\0';
if (write(STDOUT_FILENO, buf, nread) == -1)
{
free(buf);
close(fd);
return (0);
}
free(buf);
close(fd);
return (nread);
}
