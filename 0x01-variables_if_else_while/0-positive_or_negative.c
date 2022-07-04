#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/*
* main - print the value of n each time the code ir run
* Return - 0 if exited suffescfully, non-zero if otherwise
*/
int main(void)
{
	int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("n is postive: %d\n", n);
}
else if (n == 0)
{
printf("n is zero: %d\n", n);
}
else if (n < 0)
{
printf("n is negative: %d\n", n);
}
return (0);
}
