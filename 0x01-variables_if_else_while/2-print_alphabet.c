#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
/*
 * prints alphabets in lowercase
 */
{
int x;
for (int x = 'a'; x <= 'z'; x++)
{
putchar(tolower(x));

putchar('\n')
}
return (0);
}
