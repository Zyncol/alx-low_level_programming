#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int zen;
ssize_t rd, wr;
char *buf;
if (!filename)
return (0);
zen = open(filename, O_RDONLY);
if (zen == -1)
return (0);
buf = malloc(sizeof(char) * (letters));
if (!buf)
return (0);
rd = read(zen, buf, letters);
wr = write(STDOUT_FILENO, buf, rd);
close(zen);
free(buf);
return (wr);
}
