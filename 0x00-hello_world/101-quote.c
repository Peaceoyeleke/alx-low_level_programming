#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

/**
 * main - Prints the standard error sandwitched around the standard output
 *
 * Return: returns 1
 **/
int main(void)
{
char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19 \n";

write(2, ch, '\n', 59);

return (1);
}
