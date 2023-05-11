#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
/**
 * main - Entry point
 *
 * @argc: Argument count
 * @argv: Array of arguments
 *
 * Return: 0 on success, otherwise exit with error code
 */
int main(int argc, char **argv)
{
int file_from, file_to, bytes_read, bytes_written;
char buffer[1024];
if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (file_to == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
do {
bytes_read = read(file_from, buffer, 1024);
if (bytes_read == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
bytes_written = write(file_to, buffer, bytes_read);
if (bytes_written == -1)
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
} while (bytes_read > 0);
if (close(file_from) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
if (close(file_to) == -1)
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
return (0);
}
