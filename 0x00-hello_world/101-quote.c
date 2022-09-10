#include<unistd.h>
#include<stdio.h>

/**
 * main - Prints the standard error sandwitched around the standard output
 *
 * Return: returns 1
 **/
int main(void)
{
write(stderr, "and that piece of art is useful\" - Dora Korpar, 2015-10-19 \n", 59);

return (1);
}
