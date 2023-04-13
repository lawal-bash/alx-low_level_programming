#include "main.h"
/**
 * read_textfile - Reading a text file and printing it to POSIX std output
 * @filename: The pointer to file name
 * @letters: the number of letters it should read and print
 * Return: actual number of letters it can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t of, rf, wf;
char *buffer;

if (filename == NULL)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

of = open(filename, O_RDONLY);
rf = read(of, buffer, letters);
wf = write(STDOUT_FILENO, buffer, rf);

if (of == -1 || rf == -1 || wf == -1 || wf != rf)
{
free(buffer);
return (0);
}
free(buffer);
close(of);
return (wf);
}
