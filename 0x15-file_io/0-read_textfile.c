#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints the characters
 * @letters: total value of letters printed
 * @filename: the filename
 * Return: if no letters return 0
 * otherwise give numbe rof letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

int t;
ssize_t ist, nst;
char *buffer;



if (!filename)
	return (0);
t = open(filename, O_RDONLY);



if  (t == -1)
	return (0);


buffer = malloc(sizeof(char) * (letters));
if (!buffer)
	return (0);

ist = read(t, buffer, letters);
nst = write(STDOUT_FILENO, buffer, ist);


close(ist);

free(buffer);


return (nst);
}

