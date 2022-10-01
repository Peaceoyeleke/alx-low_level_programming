#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguements passed into it
 * @argv: array of strings
 * @argc: number of arguements
 * Return: 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
