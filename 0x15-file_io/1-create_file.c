#include "main.h"
/**
 * create_file -  generates file
 * @text_content: the info in file
 * @filename: name of file
 * Return: 1 if success and -1 on fails on create_file
 */



int create_file(const char *filename, char *text_content)
{
	int t;
	int tletters;
	int perm;


	if (!filename)
		return (-1);

	t = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);


	if (t == -1)
		return (-1);



	if (!text_content)
		text_content = "";


	for (tletters = 0; text_content[tletters]; tletters++)
		;

	perm = write(t, text_content, tletters);


	if (perm == -1)
		return (-1);

	close(t);
return (1);
}

