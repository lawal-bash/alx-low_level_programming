#include "main.h"
/**
 * read_textfile - Reading a text file and printing it to POSIX std output
 * @filename: The pointer to file name
 * @letters: the number of letters it should read and print
 * Return: actual number of letters it can read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t openFile, readFile, writeFile;
char *buffer;

if (filename == NULL)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

openFile = open(filename, O_RDONLY);
readFile = read(openFile, buffer, letters);
writeFile = write(STDOUT_FILENO, buffer, readFile);

if (openFile == -1 || readFile == -1 || writeFile == -1
	|| writeFile != readFile)
{
free(buffer);
return (0);
}
free(buffer);
close(openFile);

return (writeFile);
}
