#include <stdio.h>
/**
*main - loops through the alphabet and prints the to the console using putchar
*
*Return: 0 when the program runs successfuly
*/

int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar (ch);
}
putchar('\n');
return (0);
}
