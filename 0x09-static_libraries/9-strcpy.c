#include "main.h"
#include "stdio.h"

/**
 *  *_strcpy - copies a string
 * @dest: destination of thre copied string
 * @src: string to be copied
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
