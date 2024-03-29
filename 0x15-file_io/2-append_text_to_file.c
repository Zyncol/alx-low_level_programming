#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int zen;
int nletters;
int wr;
if (!filename)
return (-1);
zen = open(filename, O_WRONLY | O_APPEND);
if (zen == -1)
return (-1);
if (text_content)
{
for (nletters = 0; text_content[nletters]; nletters++)
;
wr = write(zen, text_content, nletters);
if (wr == -1)
return (-1);
}
close(zen);
return (1);
}
