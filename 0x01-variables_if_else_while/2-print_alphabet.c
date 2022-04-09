#include <stdio.h>
#include <stdlib.h>                                                                                                                     
#include <time.h>
/**
 *
 * main - Prints the lower alphabet
 * Return: 0
 */
int main(void)
{
int c;

for (c = 0; c < 26; ++c)
putchar('a'+ c);

putchar('\n');

return (0);
}
