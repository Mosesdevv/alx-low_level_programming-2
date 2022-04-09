#include <stdio.h>
#include <time.h>
/**
 * main - entry point
 *
 * Description - Prints lower alphabet
 * Return: 0
 */
int main(void)
{
char c;

for (c = 0; c <= 'z'; ++c)
{
if (c != 'e' && c != 'q')
putchar(c);
}

putchar('\n');

return (0);
}
