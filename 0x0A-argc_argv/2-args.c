#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the arguements it receives
 * @argc: number of arguements
 * @argv: array off strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

		printf("%s\n", argv[i]);

	return (0);
}
