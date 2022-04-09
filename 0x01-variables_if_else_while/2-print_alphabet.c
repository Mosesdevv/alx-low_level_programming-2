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
int c;

for (c = 0; c < 26; ++c)
putchar('a' + c);

putchar('\n');

return (0);
}
