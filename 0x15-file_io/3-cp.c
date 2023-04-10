#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
* file_error - check is file is accessible
* @file_to: file
* @file_from: source file
* @argv: argument
* Return: no return
*/
void file_error(int file_to, int file_from, char *argv[])
{
if (file_from == -1)
	{

dprintf(STDERR_FILENO, "Error: No file to read from %s\n", argv[1]);
		exit(98);

	}
	if (file_to == -1)

	{
		dprintf(STDERR_FILENO, "Error: no permission to write %s\n", argv[3]);
				exit(99); }
}

/**
 * main - prog checks code
 * @file_error - checks error on file
 * @argc: no of arguments
 * @argv:number of  argument vectors
 * Return: no return
 */
int main(int argc, char *argv[])
{
int file_to, file_from, close_error;
ssize_t tchar, ist;
char buffer[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "usage: cp file_from file_to");
exit(97);
}
file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
file_error(file_from, file_to, argv);

tchar = 1024;
while (tchar == 1024)
{
	tchar = read(file_from, buffer, 1024);
	if (tchar == -1)
		file_error(0, -1, argv);
	ist = write(file_to, buffer, tchar);
	if (ist == -1)
		file_error(0, -1, argv);
}

close_error = close(file_from);
if (close_error == -1)
{


	dprintf(STDERR_FILENO, "Error: cannot close t %d\n", file_from);
	exit(100);
}


close_error = close(file_to);
if (close_error == -1)
{
	dprintf(STDERR_FILENO, "Error: not able to close t %d\n", file_from);
	exit(100);
}
return (0);
}

