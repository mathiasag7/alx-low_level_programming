#include <stdio.h>

/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */

int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

printf("Size of a char: %zu bytes\n", (unsigned long)sizeof(a));
printf("Size of int: %zu bytes\n", (unsigned long)sizeof(b));
printf("Size of long int: %zu bytes\n", (unsigned long)sizeof(c));
printf("Size of long long int: %zu byte\n", (unsigned long)sizeof(d));
printf("Size of float: %zu byte\n", (unsigned long)sizeof(e));

return (0);
}
