#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - creates a two dimensional array of ints
 *@width: width of the matrix
 *@height: height of the matrix
 *Return: pointer to the created matrix (Success)
 *or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int *ptr = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int *)malloc(width * height * sizeof(int));

	for (i = 0; i < width * height; i++)
	{
	}

	return (ptr);
}

