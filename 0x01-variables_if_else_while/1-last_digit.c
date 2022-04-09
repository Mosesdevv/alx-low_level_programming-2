#include <stdlib.h>
#include <time.h> 
#include <stddef.h>
#include <stdio.h>   
/**
 * main - Prints a random number and states whether  
 * it is positive , negative or zero. 
 *
 * Return: Always 0. 
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Last digit of %d is %d %s\n", n, n % 10,
((n % 10) == 0) ? "and is 0"
: (((n % 10) > 5) ? "and is greater than 5"

return (0);
}
