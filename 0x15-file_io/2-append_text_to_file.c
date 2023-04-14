#include "main.h"
/**
 * _strlen - to check the length of string
 * @str: the pointer to string
 * Return: string lenght
 */
size_t _strlen(char *str)
{
size_t i;
for (i = 0; str[i]; i++)
{
;
}
return (i);
}

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: this is the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int attf;
ssize_t lens;

if (filename == NULL)
return (-1);
attf = open(filename, O_WRONLY | O_APPEND);
if (attf == -1)
return (-1);
if (text_content != NULL)
lens = write(attf, text_content, _strlen(text_content));
close(attf);
if (lens == -1)
return (-1);
return (1);
}
