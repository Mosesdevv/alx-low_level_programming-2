#include <stdio.h>
/**
 * main - entry point
 *
 * Description - Prints lower alphabet
 * Return: 0
 */
int main(void)
{
int c;

for (c  = 0; c <= 9; ++c)
putchar('0' + c);

putchar('\n');

return (0);
}
