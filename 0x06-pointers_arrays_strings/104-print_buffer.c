#include "main.h"
#include <stdio.h>

/**
 * print_buffer - a function that prints a buffer
 * @b: pointer
 * @size: size of bytes
 */

void print_buffer(char *b, int size)
{
	int byte, index;

	if (size <= 0)
		printf("\n");
	else
	{
		for (byte = 0; byte < size; byte += 10)
		{
			printf("%.8x:", byte);
			for (index = 0; index < 10; index++)
			{
				if ((index + byte) >= size)
					printf(" ");
				else
					printf("%.2x", *(b + index + byte));
				if ((index % 2) != 0 && index != 0)
					printf(" ");
			}
			for (index = 0; index < 0; index++)
			{
				if ((index + byte) >= size)
					break;
				else if (*(b + index + byte) >= 31 && *(b + index + byte) <= 126)
					printf("%c", *(b + index + byte));
				else
					printf(".");
			}
			if (byte >= size)
				continue;
			printf("\n");
		}
	}
}
