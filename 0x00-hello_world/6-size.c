#include<stdio.h>
/**
 * main - Entry point
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
// sizeof evaluates the size of a variable
printf("size of a char: %zu bytes\n", sizeof(a));
printf("size of an int: %zu bytes\n", sizeof(b));
printf("size of a long int: %zu bytes\n", sizeof(c));
printf("size of a long long int: %zu bytes\n", sizeof(d));
printf("size of a float: %zu bytes\n", sizeof(f));

return(0);
