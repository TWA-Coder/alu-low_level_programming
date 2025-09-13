#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - will tell on the console weather the number is positive or negative
*
*Return: 0 if the program runs as intended and another number otherwise
*/
int main(void)
{
long int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%ld is positive\n", n);
}
else if (n == 0)
{
printf("%ld is zero\n", n);
}
else
{
printf("%ld is negative\n", n);
}
return (0);
}
