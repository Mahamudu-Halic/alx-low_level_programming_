#include "main.h"
/**
 *_strcpy - copies string
 *@dest: where to copy string to
 *@src: what to be copied
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}