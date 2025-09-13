#include <stdio.h>
/**
*main - prints all the numbers in base 16 in lower case
*
*Return: 0 when the code runs
*/

int main(void)
{
char base_16[] = "0123456789abcdef";
int i;
for (i = 0; i < 16; i++)
{
putchar(base_16[i]);
}
putchar('\n');
return (0);
}
