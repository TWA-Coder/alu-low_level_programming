#include <stdio.h>
/**
*main - loops through the alphabet excp e&q
*and prints them to the console using putchar
*
*Return: 0 when the program runs successfuly
*/

int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar (ch);
}
}
putchar('\n');
return (0);
}
