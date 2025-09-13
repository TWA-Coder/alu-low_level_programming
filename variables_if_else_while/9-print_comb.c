#include <stdio.h>
/**
*main - prints out all the combinations of single digits to stdout
*
*Return: 0 when code runs well
*/

int main(void)
{
int num;
for (num = '0'; num <='9'; num++)
{
putchar(num);
if (num == '9')
{
break;
}
else
{
putchar(' ');
putchar(',');
}
}
putchar('\n');
return (0);
}
