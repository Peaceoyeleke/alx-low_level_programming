#include "main.h"

/**
 * _strlen - function that prints the length of a string
 * @s: string
 * Return: returns length
 */

int _strlen(char *s)
{
int l = 0;
while (*s++)
l++;
return (l);
}
