#include <stdio.h>
#include <stdlib.h>
#include <main.h>
/**
 * read_textfile - Reading a text file and printing it to POSIX std output
 * @filename: The pointer to file name
 * @letters: the number of letters it should read and print
 * Return: actual number of letters it can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t o, r, w;
char *buffer;

if (filename == NULL)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

o = open(filename, O_RDONLY);
r = read(o, buffer, letters);
w = write(STDOUT_FILENO, buffer, r);

if (o == -1 || r == -1 || w == -1 || w != r)
{
free(buffer);
return (0);
}
free(buffer);
close(o);
return (w);
}
