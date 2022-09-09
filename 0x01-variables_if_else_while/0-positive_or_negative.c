#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - its output will print intergers.
 * Description: the main function of the programm will print will print intergers eith positive, zero, nagative.
 * Return: 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
{
	printf("%i is positive\n", n);
}
else if (n == 0)
{
	printf("%i is zero\n", n);
}
else if (n < 0)
{
	printf("%i is negative\n", n);
}
return (0);
}
