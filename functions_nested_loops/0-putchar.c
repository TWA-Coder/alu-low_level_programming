#include <stdio.h>
#include "main.h"
/**
 * main - prints _putchar, followed by a new line
 * 
 * description: This program prints the string "_putchar" to the standard output
 *              followed by a newline character using the _putchar function.
 * Return: Always 0 (Success)
*/
int main(void)
{
char word[] = "_putchar";
int i = 0;
while (word[i] != '\0')
{
_putchar(word[i]);
i++;    
}
_putchar('\n');
return (0);
}
