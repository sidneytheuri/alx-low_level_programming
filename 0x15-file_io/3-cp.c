#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
* error_file - check is file is accessible
* @file_from: file_from
* @file_to: source file_to
* @argv: argument
* Return: NULL return
*/
void error_file(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
	{

dprintf(STDERR_FILENO, "Error: No file to read from %s\n", argv[1]);
		exit(98);

	}
	if (file_to == -1)

	{
		dprintf(STDERR_FILENO, "Error: no permission to write %s\n", argv[2]);
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
int file_from, file_to, error_close;
ssize_t tchar, ist;
char buffer[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "usage: cp file_from file_to");
exit(97);
}
file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
error_file(file_from, file_to, argv);
tchar = 1024;
while (tchar == 1024)
{
	tchar = read(file_from, buffer, 1024);
	if (tchar == -1)
		error_file(0, -1, argv);
	ist = write(file_to, buffer, tchar);
	if (ist == -1)
		error_file(0, -1, argv);
}
error_close = close(file_from);
if (error_close == -1)
{
dprintf(STDERR_FILENO, "Error: cannot close t %d\n", file_from);
	exit(100);
}
error_close = close(file_to);
if (error_close == -1)
{
dprintf(STDERR_FILENO, "Error: not able to close t %d\n", file_from);
	exit(100);
}
return (0);
}

