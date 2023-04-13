#include "main.h"
/**
 * create_file - to creates a function that create a file
 * @filename: this is name of the file to create
 * @text_content: this is the NULL terminal to write to file
 * Return: if the file is null -1 else create file
 */
int create_file(const char *filename, char *text_content)
{
int o, w, len = 0;

if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(o, text_content, len);
if (o == -1 || w == -1)
return (-1);
close(o);
return (1);
}
