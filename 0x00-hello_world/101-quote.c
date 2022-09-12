#include<stdio.h>
#include<unistd.h>

/**
 * main - Prints the standard error sandwitched around the standard output
 *
 * Return: returns 1
 **/
int main(void)
{
write(stderr, "and that piece of art is useful\" - Dora Korpar, 2015-10-19 \n");

return (1);
}
