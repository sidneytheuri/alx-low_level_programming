#include "main.h"
/**
 * *_stract - concatenates @src to @dest
 * @src: source string to append to @dest
 * @dest: the destination stringto be concatenated
 *Retrun: point to resulting string
 */
char *_strcat(char *dest, char *src)
{
  int index = 0;
  int dest_len = 0;
  while (dest[index++])
    dest_len++;
  for (index = 0; src[index]; index++)
    dest[dest_len++] = src[index];
  return (dest);
}
