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

while (c < 10)
{
putchar(48 + c);
if (c != 9)
{
putchar(',');
putchar(' ');
}
c++;
}
putchar('\n');

return (0);
}
