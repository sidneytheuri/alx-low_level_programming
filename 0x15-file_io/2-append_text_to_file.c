#include "main.h"
#include <stdlib.h>
/**
 * append_text_to_file - appends text at end of file
 * @text_content: adds content
 * @filename: files name
 * Return: 1 if file is present and -1 if no file
 */
int append_text_to_file(const char *filename, char *text_content)


{


	int p;
	int pletters;
	int ist;

	if (!filename)
		return (-1);

	p = open(filename, O_WRONLY | O_APPEND);



	if (p == -1)
		return (-1);

	if (text_content)
	{

		for (pletters = 0; text_content[pletters]; pletters++)
			;


		ist = write(p, text_content, pletters);

		if (ist == -1)
			return (-1);
	}
	close(p);
	return (1);
}

