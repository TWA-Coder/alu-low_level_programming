#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - function displays the last digit of n and compares the number to five
*
*Return: 0 when the functions runs successfully
*/
int main(void)
{
long int n;
int lt_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lt_digit = n % 10;
if (lt_digit > 5)
{
printf("Last digit of %ld is %d and is greater than 5\n", n, lt_digit);
}
else if (lt_digit == 0)
{
printf("Last digit of %ld is %d and is 0\n", n, lt_digit);
}
else
{
printf("Last digit of %ld is %d and is less than 6 and not 0\n", n, lt_digit);
}
return (0);
}
