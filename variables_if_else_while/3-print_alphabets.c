#include <stdio.h>
/**
*main - loops through the Upper and Lower case alphabet
*and prints the to the console using putchar
*
*Return: 0 when the program runs successfuly
*/

int main(void)
{
char ch;
char CH;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar (ch);
}
for (CH = 'A'; CH <= 'Z'; CH++)
{
putchar (CH);
}
putchar('\n');
return (0);
}
